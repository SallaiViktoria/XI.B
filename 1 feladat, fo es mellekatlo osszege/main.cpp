#include <iostream>

using namespace std;

int main()
{
    int m[100][100],n,i,j,S1=0, S2=0;
    cout << "n=";
    cin >> n;
    for (i=0; i<n;; i++){
        for (j=0; j<n ;j++){
            cin >> m[i][j];
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i=j){
                S1= S1+ m[i][j];
            }
            if (i+j== n-1){
                S2= S2 +m [i][j];
            }
        }
    }
    }
    cout << "S1="<< S1;
    cout << endl;
    cout << "S2=" << S2;
    return 0;
}
