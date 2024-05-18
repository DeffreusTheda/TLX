#include <cstdio>

bool primeEnough(int test) {
    int counter = 2;

    // for the odd possible factors
    for (int divisor = 2; divisor < test; divisor++) {
        if (test % divisor == 0) counter++;
        if (counter > 4) return false;
    }
    return true;
}

int main() {
    int count, number;
    scanf("%d", &count);

    // for each number
    for (int x  = 1; x <= count; x++) {
        scanf("%d", &number);
        if (primeEnough(number) == true) printf("YA\n");
        else printf("BUKAN\n");
    }
}