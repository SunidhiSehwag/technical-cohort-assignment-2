#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int sp=2*n-3;
    int st=1;
    for(i=1;i<=n;i++){
        int  num=1;
        for(j=1;j<=st;j++){
            cout<<num<<" ";
            num++;
        }
        for(j=1;j<=sp;j++){
            cout<<"  ";
        }
        if(i==n){
            st--;
            num--;
        }
        for(j=1;j<=st;j++){
            num--;
            cout<<num<<" ";
        }
        st++;
        sp -=2;
        cout<<endl;
    }
    
}
