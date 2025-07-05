// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

#include <iostream>
using namespace std;


int main(){
    int a, b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    int result = 0;

   if (a > b){
    result = a;
   }
   else{
    result = b;
   }

   cout<<"The bigger number is "<<result<<endl;


}