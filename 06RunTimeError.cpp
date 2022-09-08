#include <iostream>
using namespace std;

int main() {

    int a[1000000]; //Cannot make an array bigger that 10^5

    int b[10];
    cout << b[100]; //This is try to access what does not belong to it

    return 0;
}