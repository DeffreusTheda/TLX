#include <iostream>
using namespace std;

int main() {
    int count, current, smallest = 100000, biggest = -100000;
    cin >> count;

    int x = 0;
    while (x <= count) {
        cin >> current;

        //biggest
        if (current > biggest) {
            biggest = current;
        }

        //smallest
        if (current < smallest) {
            smallest = current;
        }

        x++;
    }
    cout << biggest << " " << smallest << endl;
    return 0;
}