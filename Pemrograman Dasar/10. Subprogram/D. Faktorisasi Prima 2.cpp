#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int input, factors[1000001];
    scanf("%d", &input);
    int index = 0;

    // find the factors
    while (input > 1) {
        // check if another factor is 2
        if (input % 2 == 0) {
            factors[index] = 2;
            input /= 2;
            index++;
            continue;
        }
        // check for possible odd factors
        for (int d = 3; d <= input; d+=2) {
            if (input % d == 0) {
                factors[index] = d;
                input /= d;
                index++;
                break;
            }
        }
    }
    
    // ---------- output ----------
    // to the power of what / lowest for ordering / limit prevent output repetition
    int power = 1, lowest = 1000000, limit = -1000000;
    // for how many numbers in array
    for (int j = 0; j < index; j++) {
        // control variable for use of ^
        int factorCounter = 1;
        // one array rotation -- one number
        for (int i = 0; i < index; i++) {
            // if it'll use ^
            if (factors[i] == lowest) {
                ++power;
            } else if (factors[i] < lowest && factors[i] > limit) {
                lowest = factors[i];
            }
        }  
        limit = lowest;
        if (power > 1) {
            printf("%d^%d", lowest, power);
            for (int p = 1; p < power; p++) j++;
        }
        else printf("%d", lowest);
        if (j < index) {
            ++factorCounter;
        }
        // for the " x "
        if (factorCounter > 1 && j < index-1) printf(" x ");
        power = 1; lowest = 1000000;
    }
}