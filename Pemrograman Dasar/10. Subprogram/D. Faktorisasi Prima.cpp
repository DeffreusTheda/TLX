#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int input, factors[1000001];
    scanf("%d", &input);  cout << "input: " << input << endl;
    int index = 0; cout << "index: " << index << endl << endl;

    // find the factors
    while (input > 1) {
        // check if another factor is 2
        if (input % 2 == 0) {
            factors[index] = 2; cout << "factors[index]: " << factors[index] << endl;
            input /= 2; cout << "input: " << input << endl;
            index++; cout << "index: " << index << endl;
            continue;
        }
        // check for possible odd factors
        for (int d = 3; d <= input; d+=2) {
            if (input % d == 0) {
                factors[index] = d; cout << "factors[index]: " << factors[index] << endl;
                input /= d; cout << "input: " << input << endl;
                index++; cout << "index: " << index << endl;
                break;
            }
        }
    }
    
    for (int x = 0; x < index; x++) cout << endl << factors[x];
    cout << endl << endl;
    
    // output
    int power = 1, lowest = 1000000, limit = -1000000;
    // for all numbers in array
    for (int j = 0; j < index; j++) {
        int factorCounter = 1;  cout << "factorCounter: " << factorCounter << endl;
        // one array rotation -- one number
        for (int i = 0; i < index; i++) {
            if (factors[i] == lowest) {
                ++power;
                cout << "(factors[i] is " << factors[i] << ") power: " << power << endl;
            } else if (factors[i] < lowest && factors[i] > limit) {
                lowest = factors[i]; cout << "lowest: " << lowest << endl;
            }
        }  
        limit = lowest;  cout << "limit: " << limit << endl;
        if (power > 1) {
            printf("\n%d^%d\n\n", lowest, power);
            for (int p = 1; p < power; p++) j++;
        }
        else printf("\n%d\n\n", lowest);
        if (j < index) {
            ++factorCounter; cout << "factorCounter: " << factorCounter << endl;
        }
        // for the " x "
        if (factorCounter > 1 && j < index-1) printf("\n x \n\n");
        power = 1; lowest = 1000000;
    }
}