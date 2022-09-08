#include <iostream>
#include <cstring>
using namespace std;

bool mystrcmp(char string01[], char string02[]) {
    if(strlen(string01) != strlen(string02)) return false;

    for(int i = 0; i < strlen(string01); i++) {
        if(string01[i] != string02[i]) return false;
    }
    return true;
}

int mystrcpy(char string01[], char string02[]) {
    for(int i = 0; i < strlen(string02); i++) {
        string01[i] = string02[i];
    }
    return 0;
}

int mystrcat(char string01[], char string02[]) {
    int n = strlen(string01);
    int m = strlen(string02);
    for(int i = 0; i <= m; i++) {
        string01[i + n] = string02[i];
    }
    return 0;
}

int main() {

    char word01[100];
    char word02[100];
    char word03[100] = "Monkey";
    char word04[100] = "Dog";
    cin >> word01;
    cin >> word02;

    int length = strlen(word01); //strlen is a built in function that tells the length

    cout << length << endl;
    
    if(strcmp(word01, word02) == 0) { //strcmp is a built in function that compares two strings 0 = true and 1 = false
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    if(mystrcmp(word01, word02)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    cout << "Before copying Word03 = " << word03 << " and Word04 = " << word04 << endl;
    strcpy(word03, word04); //strcpy is a built in function that copies parameter02 to parameter01
    cout << "After copying Word03 = " << word03 << " and Word04 = " << word04 << endl;
    
    cout << "Before copying Word04 = " << word04 << " and Word01 = " << word01 << endl;
    mystrcpy(word04, word01);
    cout << "After copying Word03 = " << word04 << " and Word04 = " << word01 << endl;

    strncpy(word01, word02, 2); //strncpy is a built in function that only copies the first characters depending on that number parameter03 is
    cout << word01 << " " << word02 << endl;

    strcat(word02, word03); //strcat is a built in function that concatinates two variables together
    cout << word02 << endl;

    mystrcat(word02, word01);
    cout << word02 << endl;

    return 0;
}