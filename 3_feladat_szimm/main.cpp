#include <iostream>

using namespace std;

int main()
{
    int m[100][100], n, j, i;
    cin >> n;
    for (int i=0; i<n-1; i++){
        for (int j=1; j<n; j++)
            cin >> m[i][j]; v[j][i]= v[i][j];
    }
    for ( int i=0, i<n, i++){
        m[i][j]=1;
    }
    for ( int i=0; i<n; i++){
        for ( int j=0; j<n; j++){
            cout << m[i][j] << " ";
        }
    } cout << endl;
    return 0;
}
