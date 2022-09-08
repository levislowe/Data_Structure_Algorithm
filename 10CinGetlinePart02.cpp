#include <iostream>
using namespace std;

int main() {

    char word[100];
    cout << "Say Hello World: ";
    cin.getline(word, 100, 'o'); //By default the third perameter is \n
    cin.clear();

    cout << "You said: " << word << endl;

    return 0;
}