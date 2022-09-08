#include <iostream>
using namespace std;

int length(char input[]) {
    int count = 0;
    for(int i = 0; input[i]; i++) {
        count++;
    }
    return count;
}

void reverse(char input[]) {
    int start = 0;
    int end = length(input) - 1;

    while(start < end) {
        swap(input[start], input[end]);
        start++;
        end--;
    }
}

int main() {

    char name[100];
    cout << "What is your name? ";
    cin.getline(name, 100);

    cout << "Your name is " << name << endl;

    reverse(name);

    cout << "Your name reversed is " << name << endl;

    return 0;
}