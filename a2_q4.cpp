#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        //fpr space
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }
        //for star
        for(j=n;j>=i;j--){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}
