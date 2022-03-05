/* THIS PROGRAM TAKES INPUT FROM THE USER AND DISPLAYS THE OUTPUT FOR DIFFERENT DATATYPES
*/
#include<iostream>
using namespace std;

int main(){
    int num1;
    float num2;
    double num3;
    char a;

    cout << "Enter a integer value: ";
    cin >> num1;
    cout << "The integer value entered is " << num1 << endl;

    cout << "Enter a float value: ";
    cin >> num2;
    cout << "The float value entered is " << num2 << endl;

    cout << "Enter a double value: ";
    cin >> num3;
    cout << "The double value entered is " << num3 << endl;

    cout << "Enter a character value: ";
    cin >> a;
    cout << "The character value entered is " << a << endl;

    //displaying more than one literal character at once
    cout << "Enter an integer value and a character value: " << endl;
    cin >> num1 >> a;
    cout << "The integer entered is " << num1 << " and the character entered is " << a << endl;

    return 0;
} 