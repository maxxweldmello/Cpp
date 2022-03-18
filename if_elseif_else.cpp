/*THIS IS A EXAMPLE FOR IF_ELSE_ELSEIF CONDITION
*/ 
#include<iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter any number: ";
    cin >> number;

    if(number > 0){
        cout << "It is a positive number" << endl;
    }else if(number == 0){
        cout << "It is a zero" << endl;
    }else{
        cout << "It is a negative number" << endl;
    }

    return 0;
}