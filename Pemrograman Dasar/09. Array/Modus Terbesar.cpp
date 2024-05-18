#include <cstdio>

int main() {
    int count, test;
    scanf("%d", &count);
    int inputs[count];

    // insert inputs into an array
    for (int x = 0; x < count; x++) {
        scanf("%d", &test);
        inputs[x] = test;
    }

    int modus = 0, modusSize = 0;
    // for each index in array
    for (int x = 0; x < count; x++) {
        int counter = 0;
        // count how many of a value there is
        for (int i = 0; i < count; i++) {
            if (inputs[x] == modus) continue;
            if (inputs[x] == inputs[i]) counter++;
        }
        // update modus
        if (counter > modusSize) {
            modusSize = counter;
            modus = inputs[x];
        } else if (counter == modusSize && inputs[x] > modus) {
            modusSize = counter;
            modus = inputs[x];
        }   
    }

    // print modus
    printf("%d", modus);
}