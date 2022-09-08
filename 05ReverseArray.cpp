#include <iostream>
using namespace std;



int main() {

    int n;
    cout << "How many elements do you want in your array? ";
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cout << "Element " << i << " is: ";
        cin >> a[i];
    }

    cout << "Your array is ";
    for(int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;

    int start = 0;
    int end = n - 1;
    while(start <= end) {
        swap(a[start], a[end]);

        start++;
        end--;
    }

    cout << "Your array reversed is ";
    for(int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;

    return 0;
}