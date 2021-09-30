#include <iostream>

using namespace std;

int main()
{
   int i,j, N;
   cout << "N=";
   cin >> N;
   int matrix [N][N];
   for (i=0; i<N; i++){
    matrix [N][N]=1;
}
for (i=0; i< N-1;i++){
    for (j=i+1;j<N; j++){
        cout << "matrix[ "<< i>>"] ["<< j>> "]=";
        cin >> matrix[i][j];
        matrix[j][i]= matrix [i][j];
    }
}for (int i=0; i<N; i++)
    return 0;
}
