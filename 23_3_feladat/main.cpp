#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i, j ,n, v[100][100], S1=0, S2=0;
    ifstream in ("input.txt");
    in >> n;
    for ( i=0; i<n; i++){
        for (j=0; j<n; j++){
            in >> v[i][j];
       }
    }
    for ( i=0; i<n; i++){
        for (j=0;j<n;j++){
            if ( i<j && i+j<n-1){
                S1= S1+v[i][j];
            }
            if ( i>j && i+j>n-1){

            }
        }
        if (S1<S2){
            cout << " a deli haromszog a nagyobb";
        }
        else {
            cout << " az eszaki haromszog a nagyobb";
        }
    }
    in.close();
    return 0;
}
