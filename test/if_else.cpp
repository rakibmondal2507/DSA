#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if (age>18){
        cout<<"Adult"<<endl;
    }
    else{
        cout<<"teenager"<<endl;
    }
}