// 1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 


#include<iostream>
using namespace std;


int main(){
    int n;

    cout<<"Enter tempreture: ";
    cin>>n;

  if(n>=70 && n<=90){
    cout<<"yes";
  }else{
    cout<<"no";
  }
   
return 0;
}