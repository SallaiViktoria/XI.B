#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i, j, v[100][100], n, S=1, oszto;
    ifstream in("input.txt");
    in >> n;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            in >> v[i][j];
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (j>i){
            for (int oszto=2; oszto < v[i][j]/2+1; oszto++){
                if (v[i][j]%oszto==0){
                    S=S*v[i][j];
                oszto=n;
                }
            }
            }
        }
    }
    cout << S <<endl;
    in.close();
    return 0;
}
