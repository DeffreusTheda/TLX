#include <cstdio>

bool isPossible() {
    for (int x = 1; x < count; x++) {
        switch {
            case -1:
                if (numbers[x]*numbers[x+1] >= 0) return false;
            case 0: 
                if (numbers[x]*numbers[x+1] != 0) return false;
            case 1:
                if (numbers[x]*numbers[x+1] <= 0) return false;
        }
    }
    return true;
}

int main() {
    int count;
    scanf("%d", &count);
    int numbers[count];
    int type; // 0 for zeroes; 1 for positives; -1 for negatives
    bool possible;
    for (int x = 0; x < count; x++) scanf("%d", &numbers[x]);

    // set type
    for (int x = 0; x < count; x++) {
        if (numbers[x] * numbers[x+1] == 0) type = 0;
        if (numbers[x] * numbers[x+1] > 0) type = 1;
        if (numbers[x] * numbers[x+1] < 0) type = -1;
    }

    if (isPossible == false) printf("mustahil");
}