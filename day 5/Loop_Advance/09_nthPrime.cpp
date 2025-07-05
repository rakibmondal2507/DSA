#include<iostream>
using namespace std;

int main(){
   int i, n;
   cout<<"Enter Number: ";
   cin>>n;

   for (int j = 1; j < n; j++){
   if(n<2){
    cout<<" Not a prime Number";
    return 0;
   }else{
    for (i=2; i<j; i++){
        if (n%i==0){
            cout<<"not a prime number";
            return 0;
        }
    }
    cout<<"Prime Number";
    return 0;
   }
   }
return 0;
}