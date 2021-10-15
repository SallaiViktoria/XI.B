#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100][100],i,j,n,S1=0,S2=0,lnko=0,lkkt=0,b,f,g;
ifstream bemenet("input.txt");
ofstream kiir("lkkt.out");
bemenet >>n;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    bemenet >> v[i][j];
    }
}
for (i=0; i<n ; i++){
    for (j=0; j<n; j++){
        if(i<j)
            S1+=v[i][j];
        if(i>j)
            S2+=v[i][j];
    }
}
f=S1;
g=S2;

while( S2!=0)
{
    b =S1%S2;
    S1=S2;
    S2=b;
}
lnko=S1;
lkkt = g*f/lnko;

kiir << lkkt;

    return 0;
}
