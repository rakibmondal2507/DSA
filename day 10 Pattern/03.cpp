// Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//         5
//       5 4
//     5 4 3
//   5 4 3 2 
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
   int row, col, n;
   cout<<"Enter Number: ";
   cin>>n;

   for(row=1; row<=n; row++){
    for(col=1; col<=n-row; col++){
        cout<<"  ";
    }
    for(col=1; col<=row; col++){
        int num = n- col+1;
        cout<<num<<" ";

    }
    cout<<endl;
   }
return 0;
}

