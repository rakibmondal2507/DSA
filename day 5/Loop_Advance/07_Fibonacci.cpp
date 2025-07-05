//Print n’th Fibonacci number.

#include<iostream>
using namespace std;

int main(){
   int n, i, a, b, c;
   cout<<"Enter Number: ";
   cin>>n;
    a = 0;
    b = 1;
    cout<<a<<endl<<b<<endl;
   for (i = 2; i<=n; i++){
    c = a + b;
    a = b;
    b = c;
    cout<<c<<endl;
   }
return 0;
}