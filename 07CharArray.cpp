#include <iostream>
using namespace std;

int main() {

    char alpha00[100];
    cout << "Enter abc: ";
    cin >> alpha00;

    cout << "Your array is: " << alpha00 << endl; //Prints abc and a null at the end

    char alpha01[100];
    cout << "Enter abc: ";
    cin >> alpha01;

    alpha01[4] = 'x';
    cout << "Your array is: " << alpha01 << endl; //Prints abc and not x because null is automatically place after in position 3
    
    char alpha02[100];
    cout << "Enter abc: ";
    cin >> alpha02;

    alpha02[3] = 'd';
    alpha02[4] = 'x';
    cout << "Your array is: " << alpha02 << endl; //Prints abcdx and any garbage varlue until null is encountered

    char alpha03[100];
    cout << "Enter abc: ";
    cin >> alpha03;

    alpha03[1] = '\0';
    cout << "Your array is: " << alpha03 << endl; //Prints only a because null in now in postition 1

    return 0;
}