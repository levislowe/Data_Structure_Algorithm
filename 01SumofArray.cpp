#include <iostream>
using namespace std;

int main() {

    cout << "Enter the number of elements: ";
    int n;
    cin >> n; //User input defines the value n is

    int a[n]; //An array is build with n number of elements
    //Input
    for(int i = 0; i < n; i++) { 
        cout << "Define element " << i << ": ";
        cin >> a[i]; //Defines every element in the array using a for loop
    }

    cout << "Your array is:";
    for(int i = 0; i < n; i++) {
        cout << " " << a[i]; //Outputs all of the elements in the array
    }
    cout << endl;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i]; //Adds each element in the array one by one
    }
    cout << "The sum of the array is: " << sum << endl; //Outputs the sum of all of the elements in the array

    return 0;
}