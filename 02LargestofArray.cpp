#include <iostream>
#include <climits> //Allows usage of the INT_MIN and INT_MAX values
using namespace std;

int main() {

    cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cout << "Define element " << i << ": ";
        cin >> a[i];
    }

    cout << "Your array is:";
    for(int i = 0; i < n; i++) {
        cout << " " << a[i];
    }
    cout << endl;

    int largest = INT_MIN; //Defines the largest value as negative infinity
    for(int i = 0; i < n; i++) {
        if(a[i] > largest) { //Compares each value in the array with the largest value
            largest = a[i]; //If element i is bigger than largest, redefines largest as element i
        }
    }

    int smallest = INT_MAX; //Defines the smallest value as postive infinity
    for(int i = 0; i < n; i++) {
        if(a[i] < smallest) { //Compare each value in the array with the smallest value 
            smallest = a[i]; //If element i is smallesr than smallest, redefines smallest as element i
        }
    }

    cout << "The largest number in your array is: " << largest << endl;
    cout << "The smallest number in your array is:" << smallest << endl;

    return 0;
}