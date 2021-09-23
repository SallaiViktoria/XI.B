#include <iostream>

using namespace std;

int main()
{
    int v[100][100], n;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "a[ "<< i<<" ] ["<< j << "] ";
            cin >> a [i] [j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << a [i][j]<< " ";
        }
    }
    cout << endl;
    return 0;
}
