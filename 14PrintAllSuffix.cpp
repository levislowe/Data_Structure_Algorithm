#include <iostream>
#include <cstring>
using namespace std;

void printAllsuffix(char string[]) {
    for(int e = strlen(string); e != 0; e--) {
        for(int s = strlen(string); s >= e-1; s--) {
            cout << string[s];
        }
        cout << endl;
    }
}

int main() {

    char string01[100];
    cin >> string01;

    printAllsuffix(string01);

    return 0;
}