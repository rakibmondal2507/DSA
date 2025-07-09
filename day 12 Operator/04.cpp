// 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter Number: ";
   cin>>n;

   if(n>13 && n<19){
    cout<<"You are teenager.";
   }
   else{
    cout<<"You are not teenager.";
   }
return 0;
}