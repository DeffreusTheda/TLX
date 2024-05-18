#include <cstdio>
#include <cmath>

bool isPrime(int test) { 
    // count how many factor there is (prime == 2; else is false)
    int counter = 1;
    for (int divisor = 2; divisor <= test; divisor++) {
        if (test % divisor == 0) counter++;
        if (counter > 2) return false;
    }
    if (counter == 2) return true;
    else return false;
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