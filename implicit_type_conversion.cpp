/*THIS PROGRAM SHOWS IMPLICIT TYPE CONVERSION BETWEEN TWO DATATYPES
*/
#include<iostream>
using namespace std;

int main(){
   
   int a = 10;
   double b;

   double c = 10.01;
   int d;

   b = a;
   d = c;
   
   //conversion from int to double
   cout << "--IMPLICIT TYPE CONVERSION--" << endl;
   cout << "---FROM INT TO DOUBLE---" << endl;
   cout << "Number in integer = " << a << endl;
   cout << "Number in double = " << b << endl; //the int literal(10) is changed to double's literal
   
   //conversion from double to int
   cout << "---FROM DOUBLE TO INT---" << endl;
   cout << "Number in double = " << c << endl;
   cout << "Number in integer = " << d << endl; //the double's literal(10.01) is changed to int's literal

   return 0;
}