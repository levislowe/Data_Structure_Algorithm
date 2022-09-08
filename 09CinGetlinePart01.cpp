#include <iostream>
using namespace std;

//Using cin befroe cin.getline will break cin.getline
//Using cin.getline to many times will create issues it seems
int main() {

    char word01[100]; 
    cout << "Say Hello World: ";
    cin.getline(word01, 100);

    cout << "You said: " << word01 << endl; 
    
    char word02[100];
    cout << "Say Hello World: ";
    cin.getline(word02, 4);

    cout << "You said: " << word02 << endl;

    return 0;
}