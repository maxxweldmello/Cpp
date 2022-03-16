/*THIS PROGRAM IS FOR DIFFERENT OPERATOR'S FUNCTIONS
*/
#include<iostream>
using namespace std;

int main(){
    int a = 20, b = 10;
    
    //HERE IS ARITHMETIC OPERATIONS
    cout << "ARITHMETIC OPERATION: " << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    //HERE IS INCREMENT AND DESCREMENT OPERATIONS
    cout << "INCREMENT AND DECREMENT OPERATION: " << endl;
    cout << "++a = " << ++a << endl;
    cout << "--b = " << --b << endl;

    //HERE IS ASSIGNMENT OPERATIONS
    cout << "ASSIGNMENT OPERATION: " << endl;
    cout << "a += b is " << (a+=b) << endl;
    cout << "a -= b is " << (a-=b) << endl;
    cout << "a *= b is " << (a*=b) << endl;
    cout << "a /= b is " << (a/=b) << endl;
    cout << "a %= b is " << (a%=b) << endl;

    //HERE IS RELATIONAL OPERATIONS
    cout << "RELATIONAL OPERATION: " << endl;
    cout << "a==b is " << (a==b) << endl;
    cout << "a!=b is " << (a!=b) << endl;
    cout << "a>b is " << (a>b) << endl;
    cout << "a<b is " << (a<b) << endl;
    cout << "a>=b is " << (a>=b) << endl;
    cout << "a<=b is " << (a<=b) << endl;

    //HERE IS LOGICAL OPERATIONS
    cout << "LOGICAL OPERATION: " << endl;
    cout << "a==b && a<=b is " << ((a==b) && (a<=b)) << endl;
    cout << "a!=b && a>b is " << ((a!=b) && (a>b)) << endl;
    cout << "a==b || a<=b is " << ((a==b) || (a<=b)) << endl;
    cout << "a!=b || a>b is " << ((a!=b) || (a>b)) << endl;


    return 0;
}
