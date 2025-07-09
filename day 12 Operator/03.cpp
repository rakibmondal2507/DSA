// 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter number: ";
   cin>>n;

   if(n > 0 && n%2==0){
    cout<<"yes";
   }else
   cout<<"No";
return 0;
}