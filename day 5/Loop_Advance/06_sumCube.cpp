//Print Sum of cube of first n natural number

#include<iostream>
using namespace std;

int main(){
   int i, n,pow, sum = 0;
cout<<"Enter Number: ";
cin>>n;

for(i=1; i<=n; i++){
    // pow =  i*i;
    // pow = pow * i; 
    // sum = sum + pow;
    sum = (n*(n+1)/2);
    sum = sum * sum;
}
cout<<sum<<endl;

return 0;
}