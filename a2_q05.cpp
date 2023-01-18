#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n-1;i++){
         for(j=i;j<n;j++){
            cout<<"  ";
        }
        
        //for stars 1 
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        // for stars 2
        for(j=1;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i=1;i<=n;i++){
       
        //for space
        int space = i-1;
        while(space){
           cout<<"  ";
           space--;
        }
        
        //for star
        for(j=n;j>=i;j--){
            cout<<"* ";

        }
        //for star 2
        for(j=i;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
