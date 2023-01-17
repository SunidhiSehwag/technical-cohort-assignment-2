#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        //for space 
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        //for stars
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
