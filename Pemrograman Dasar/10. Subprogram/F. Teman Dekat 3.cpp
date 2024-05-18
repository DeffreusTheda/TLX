#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int distanceIs(int x1, int y1, int x2, int y2, int d) {
    int distanceX = abs(x2 - x1);
    int distanceY = abs(y2 - y1);
    int res = pow(distanceX, d) + pow(distanceY, d);
    return res;
}

int main() {
    int N, D;
    long long lowest = 1000000000, highest = 0;
    scanf("%d %d", &N, &D);
    int inputs[N][2];
    for (int y = 0; y < N; y++) {
        scanf("%d", &inputs[y][0]); 
        scanf("%d", &inputs[y][1]);
    }
    
    long long distances[1000000];
    int counter = 0; // for how many distance values there are

    for (int n = 0; n < N; n++) {
        for (int i = n+1; i < N; i++) {
            distances[counter] = distanceIs(inputs[n][0], inputs[n][1], inputs[i][0], inputs[i][1], D);
            if (distances[counter] < lowest) lowest = distances[counter]; // find the lowest
            if (distances[counter] > highest) highest = distances[counter]; // find the highest
            counter++;
        }
    }
    printf("%lli %lli", lowest, highest);
}