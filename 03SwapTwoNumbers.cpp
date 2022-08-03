#include <iostream>
using namespace std;

int main() {

    cout << "Define a and b: ";
    int a, b;
    cin >> a >> b;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int temp = a; //Define the tempory value as a
    a = b; //Define a as b
    b = temp; //Define b as the tempory value

    cout << "After swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a = a^b; //Defines a as a^b
    b = a^b; //Defines b as a^b^b and cancels the two b values making b = a
    a = a^b; //Defines a as a^b^a and cancels the two a values making a = b

    cout << "After another swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b); //C++ function that can be used to swap the values of a and b
    
    cout << "Final swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
 
    return 0;
}