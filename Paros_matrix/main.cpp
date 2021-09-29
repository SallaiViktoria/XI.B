#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100][100],n,i,k;
    cin >> n;
    for (int i=0; i<n; i++){
        for ( int k=0; k<n; k++){
            cin >> v[i][k];
        }
    }
    for ( int i=0; i<n; i++){
        for ( int k=0; k<n; k++){
            if (v[i][k]%2==0){
                cout << v[i][k]<< " ";
            }
        }
    }
    return 0;
}
