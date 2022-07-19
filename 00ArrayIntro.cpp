#include <iostream>
using namespace std;

int main() {

    int a[10]; //Declaring an array
    a[0] = 2; //Initializing values
    a[4] = 5;
    cout << a[0] << " " << a[4] << endl; //Printing values
    

    int b[4] = {1,2,3,4}; //Declaring the array and initializing values
    cout << b[0] << " " << b[1] << " " << b[2] << " " << b[3] << endl; //Printing values but this is a bad way of printing

    int c[10] = {1,2,3,4}; //Initialized values that are not defined default to 0
    for(int i = 0; i < 10; i++) { //A much better way of printing using a for() loop
        cout << c[i] << " ";
    }
    cout << endl;

    int d[10]; //Not initializing values creates garabage values
    for(int i = 0; i < 10; i++) {
        cout << d[i] << " ";
    }
    cout << endl;

    int e[10];
    for(int i = 0; i < 10; i++) {
        e[i] = i * i; //each cycle will create 0*0, 1*1, 2*2, 3*3, ..., 9*9.
        cout << e[i] << " ";
    }
    cout << endl;

    int f;
    cout << sizeof(b) << endl; //Will produce 4 since a variable is 4 bytes

    int g[10] = {1,2,3};
    cout << sizeof(d) << endl; //Size is 40 since we made 10 variables in the array

    return 0;
}