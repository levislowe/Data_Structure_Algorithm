#include <iostream>
using namespace std;

int main() {

    int a[100][100];
    int r, c;
    cin >> r >> c;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    //Rowwise
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //Columnwise
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}