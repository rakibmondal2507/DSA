
// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K


#include<iostream>
using namespace std;

int main(){
   int row;
   char col;
   for (row=1; row<=5; row++){
    for(col='F'; col<='K'; col=col+1){
        cout<<col<<" ";
    }
    cout<<endl;
   }
return 0;
}
