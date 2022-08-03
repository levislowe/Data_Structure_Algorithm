#include <iostream>
using namespace std;

int main() {

    cout << "Define the number of elements in the array: ";
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

    cout << "Your array reversed in:";
    for(int i = n-1; i >= 0; i--) { //for loop that goes through the array backwards
        cout << " " << a[i];
    }
    cout << endl;

    return 0;
}