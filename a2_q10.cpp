#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    int os=n/2; //outer space 
    int is= -1; //inner space
    for(i=1;i<=n;i++){
        for(j=1;j<=os;j++){
            cout<<"  ";
        }
        cout<<"* ";
        for(j=1;j<=is;j++){
            cout<<"  ";
        }
        if(i>1 && i<n){
            cout<<"* ";
        }
        if(i<=n/2){
            os--;
            is+=2;
        }
        else{
            os++;
            is-=2;
        }
        cout<<endl;
    }
    return 0;
}
