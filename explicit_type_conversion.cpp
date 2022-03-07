/*THIS PROGRAM SHOWS EXPLICIT TYPE CONVERSION BETWEEN TWO DATATYPES
*/
#include<iostream>
using namespace std;

int main(){
   
   int a = 10;
   double b;

   double c = 10.01;
   int d;

   b = (double)a;
   d = (int)c;

   //conversion from int to double
   cout << "--EXPLICIT TYPE CONVERSION--" << endl;
   cout << "---FROM INT TO DOUBLE---" << endl;
   cout << "Number in integer = " << a << endl;
   cout << "Number in double = " << b << endl;
 
   //conversion from double to int
   cout << "---FROM DOUBLE TO INT---" << endl;
   cout << "Number in double = " << c << endl;
   cout << "Number in integer = " << d << endl;

  return 0;
}