#include <iostream>
using namespace std;
int main(){
    int i,j,n=1,num;
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            cout<<n<<" " ;
            n++;
        }
        cout<<endl;
    }
    return 0;
}
