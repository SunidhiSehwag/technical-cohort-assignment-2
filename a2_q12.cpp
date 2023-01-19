#include <iostream>
using namespace std;
int main(){
    int i,j,num;
    cin>>num;
    int a=0,b=1,c=a+b;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            c=a+b;
            cout<<a<<"  ";
            a=b;
            b=c;

        }
        cout<<endl;
    }
    return 0;
}
