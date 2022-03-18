/*THIS IS A EXAMPLE FOR NESTED IF_ELSE CONDITION
*/
#include<iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter any number: ";
    cin >> number;

    if(number != 0){
        if(number > 0){
            cout << "It is a positive number" << endl;
        }else{
            cout << "It is a negative number" << endl;
        }
    }else{
        cout << "It is a zero" << endl;
    }

    return 0;
}