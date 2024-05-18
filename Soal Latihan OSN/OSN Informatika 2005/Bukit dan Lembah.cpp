#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // initialization and such
    int prev = 0, curr = 0, res;
    scanf("%d", &curr);

    // for each line
    while (scanf("%d", &curr)) {
        // get current line
        scanf("%d", &curr);

        // update res
        if (abs(prev - curr) > res) {
            res = abs(prev - curr);
        }

        // replace prev with curr
        prev = curr;
    }

    // output
    printf("%d", res);
}
