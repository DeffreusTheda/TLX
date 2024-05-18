#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int fact (int test) {
    int res = 1;
    for (int t = 2; t <= test; t++) {
        res *= t;
    } printf("-- res: %d\n", res);
    return res;
}

int closeness(int x1, int y1, int x2, int y2, int D) {
    printf("\n-- calculation of closeness --\n");
    int var1 = (sqrt((x2 - x1)*(x2 - x1))); printf("int var1: %d\n", var1);
    int var2 = (sqrt((y2 - y1)*(y2 - y1))); printf("int var2: %d\n", var2);
    int powered1 = 1; int powered2 = 1;
    for (int d = 0; d < D; d++) {  
        powered1 = powered1 * var1; printf("powered1: %d\n", powered1);
        powered2 = powered2 * var2; printf("powered2: %d\n", powered2);
    }
    int res = powered1+powered2;
    printf("== inputs[%d][%d] & inputs[%d][%d]: %d\n", x1, y1, x2, y2, res);
    return res;
}

int main() {
    int N, D;
    scanf("%d %d", &N, &D); printf("N: %d\nD: %d\n", N, D);;
    int inputs[N][2];
    for (int y = 0; y < N; y++) {
        scanf("%d", &inputs[y][0]); 
        scanf("%d", &inputs[y][1]);
        printf("inputs[%d]: %d %d\n", y, inputs[y][0], inputs[y][1]);
    }

    long long count = fact(N) / (fact(2) * fact(N-2)); printf("\ncount: %lli\n", count);
    long long distances[count];
    int counter = 0; printf("int counter: %d\n", counter);

    for (int n = 0; n < N; n++) {
        if (counter == count) {
            printf("counter: %d == count: %lli\nall distances found!\n\n", counter, count);
            break;
        }
        for (int i = n+1; i < N; i++) {
            distances[counter] = closeness(inputs[n][0], inputs[n][1], inputs[i][0], inputs[i][1], D);
            printf("distances[%d]: %lli\n", counter, distances[counter]);
            counter++; printf("counter: %d\n", counter);
        }
    }

    int lowest = 1000000; printf("lowest: %d\n", lowest);
    for (int x = 0; x < count; x++) {
        printf("distances[%d]: %lli\n", x, distances[x]);
        if (distances[x] < lowest) {
            lowest = distances[x]; printf("lowest2: %lli\n", distances[x]);
        }
    }
    printf("%d ", lowest);

    int highest = -1000000; printf("highest: %d\n", highest);
    for (int x = 0; x < count; x++) {
        if (distances[x] > highest) {
            highest = distances[x]; printf("highest: %d\n", highest);
        }
    }
    printf("%d", highest);
}   