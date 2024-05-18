#include <cstdio>
#include <cmath>

bool isPrime(int test) { 
    if (test == 1) return false;
    for (int divisor = 2; divisor <= trunc(sqrt(test)); divisor++) {
        if (test % divisor == 0) return false;
    }
    return true;
}

int main() {
    int count, number;
    scanf("%d", &count);
    for (int x = 1; x <= count; x++) {
        scanf("%d", &number);
        if (isPrime(number) == true) printf("YA\n");
        else printf("BUKAN\n");
    }
}

