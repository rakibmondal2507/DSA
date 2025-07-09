// 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

#include<iostream>
using namespace std;

int main(){
   int a,b,c;
   cout<<"Enter 3 Number: ";
   cin>>a>>b>>c;

   if(a>b || a>c){
    cout<<"yes";
   }else
   cout<<"No";
return 0;
}