/*THIS IS A EXAMPLE FOR IF_ELSE CONDITION
*/
#include<iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter a number(Negitive or Positive): ";
    cin >> number;

    if(number>=0){
        cout << "It is a positive number" << endl;
    }
    else{
            cout << "It is a negative number" << endl;
    }

    return 0;
}