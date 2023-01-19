#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int sp=0,st=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++){
            cout<<"  ";
         }
         for(j=1;j<=st;j++){
            if(i>1 && i<=n/2 && j>1 && j<st){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
         }
         if(i<=n/2){
            sp++;
            st -=2;
         }
         else{
            sp--;
            st +=2;
         }
         cout<<endl;
    }
}
