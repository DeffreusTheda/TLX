#include <cstdio>
#include <cmath>

int factorialOf (int test) {
    int result = 1;
    for (int t = 2; t <= test; t++) {
        result *= t;
    }
    return result;
}

int closeness(int x1, int y1, int x2, int y2, int D) {
    int var1 = (sqrt((x2 - x1)*(x2 - x1)));
    int var2 = (sqrt((y2 - y1)*(y2 - y1)));
    for (int d = 1; d < D; d++) {  
        var1*=var1;
        var2*=var2;
    }
    int result = var1+var2;
    return result;
}

int main() {
    int N, D;
    scanf("%d %d", &N, &D);
    // store inputs
    int inputs[N][2];
    for (int y = 0; y < N; y++) {
        scanf("%d", &inputs[y][0]); 
        scanf("%d", &inputs[y][1]);
    }

    // storage for distances
    long long count = factorialOf(N) / (factorialOf(2) * factorialOf(N-2)); 
    long long distances[2000];
    int counter = 0;

    // calculate and store distances
    for (int n = 0; n < N; n++) {
        if (counter == count) break;
        for (int i = n+1; i < N; i++) {
            distances[counter] = closeness(inputs[n][0], inputs[n][1], inputs[i][0], inputs[i][1], D);
            counter++;
        }
    }

    // output lowest
    long long lowest = 1000000000;
    for (int x = 0; x < count; x++) {
        if (distances[x] < lowest) lowest = distances[x];
    }
    printf("%lli ", lowest);

    // output highest
    long long highest = -1000000;
    for (int x = 0; x < N; x++) {
        if (distances[x] > highest) { highest = distances[x];}
    }
    printf("%lli", highest);
}