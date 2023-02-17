#include <iostream>

using namespace std;

int main()
{
    int m,n,i,j,x=0,a[100][100];
    cout << "m=";
    cin>>m;
    cout << "n=";
    cin>>n;
    for(i=m;i>0;i--){
        for(j=n;j>0;j--){
            a[i][j]=x*x;
            x=x+2;
        }
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
