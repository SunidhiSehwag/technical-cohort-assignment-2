#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int sp=n/2;
    int st= 1;
    int val =1;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++){
            cout<<"  ";
        }
        int cval=val;
        for(j=1 ;j<=st ;j++){
            cout<<cval <<"  ";
            
            if(j<=st/2){
                cval++;
            }
            else{
                cval--;
            }
        }
        if(i<=n/2){
            sp--;
            st+=2;
        }
        else{
            sp++;
            st-=2;
        }
        cout<<endl;

    }

}
