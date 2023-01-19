#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for (int i = 0; i < n; i++ )
    {
      int i1 = 1;
      for (int j = 0; j <= i; j++)  {
        cout<<i1<<"  ";
        int i2 = (i1 * (i - j)) / (j + 1);
        i1 = i2;

      }
      cout<<endl;
        }
        cout<<endl;
}
