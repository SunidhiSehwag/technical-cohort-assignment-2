#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int sp=n/2;
    int st=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++){
            if(i==n/2+1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }    
        }
        for(j=1;j<=st;j++){
            cout<<"* ";
        }
        if(i<=n/2){
            st++;
        }
        else
        st--;
        cout<<endl;
    }
}
    
