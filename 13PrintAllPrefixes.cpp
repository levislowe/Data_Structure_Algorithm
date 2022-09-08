#include <iostream>
using namespace std;

void printAllprefixes(char string[]) {
    for(int e = 0; string[e] != '\0'; e++) {
        for(int s = 0; s <= e; s++) {
            cout << string[s];
        }
        cout << endl;
    }
}

int main() {

    char string01[100];
    cin >> string01;

    printAllprefixes(string01);

    return 0;
}