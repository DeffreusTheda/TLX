#include <cstdio>
#include <cstring>
#include <iostream>
#include <string.h>
using namespace std;

//* one more to go

string input;
char current;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> input;
    for (int i = 0; i < int(input.length()); i++) {
        current = input[i];
        // camel case to snake case
        if (current >= 'A' && current <= 'Z') {
            string ins(1, (current + 32));
            input.erase(i, 1);
            input.insert(i, "_");
            input.insert(i+1, ins);
            /*string ins = '_' + to_string(current + 32);
            input.erase(i, 1);
            input.insert(i, ins);*/
        }
        // snake case to camel case
        if (current == '_') {
            char afterUnderscore = input[i+1];
            input.erase(i, 2);
            string insc(1, (afterUnderscore - 32));
            input.insert(i, insc);
        }
    }
    cout << input << endl;
}