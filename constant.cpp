/* THIS PROGRAM IS A SIMPLE EXAMPLE OF CONSTANT VARIABLE
*/
#include<iostream>
using namespace std;

int main(){
    double radius = 5.1;
    const double pi = 3.14;

    radius = 5.2; //changing radius from 5.1 to 5.2
    //pi = 3.15; //changing pi to 3.15(This will show an error!)

    cout << "Radius = " << radius << endl;
    cout << "Pi = " << pi << endl;
  
    return 0;
}