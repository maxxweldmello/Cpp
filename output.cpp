/* THIS PROGRAM DISPLAYS ONLY THE OUTPUT FOR DIFFERENT DATATYPE LITERALS
*/
#include<iostream>
using namespace std;

int main(){ 
   int num1 = 1000000000; 
   float num2 = 10.0001; 
   double num3 = 10.0001;
   char a = 'A'; 
   wchar_t b = L'F'; 
   bool flag = true; 
   
   cout << "The integer literal is : " << num1 << endl; 
   cout << "The float literal is : " << num2 << endl; 
   cout << "The double literal  is : " << num3 << endl; 
   cout << "The charecter literal is : " << a << endl; 
   cout << "The wide charecter literal is : " << b << endl; //displaying the ASCII representation of the charecter literal. 
   cout << "The boolean literal is : " << flag << endl;
   
   //displaying two different literals in one statement...
   cout << "The integer and the character literal at once are :" << num1 << " and " << a;

   return 0; 
}