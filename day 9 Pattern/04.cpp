// Fourth Pattern:

//       A B C D
//       A B C
//       A B
//       A


#include<iostream>
using namespace std;

int main(){
   int row, col;
   for(row = 1; row<=5; row= row+1){
    for(col=1; col<=4-(row-1);  col=col+1){
        char name = 'A'+(col-1);
        cout<<name<<" ";
    }
    cout<<endl;
   }
return 0;
}