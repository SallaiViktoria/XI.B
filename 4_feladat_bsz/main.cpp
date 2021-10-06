#include <iostream>

using namespace std;

int main()
{
     int v[100][100],i,j,n,S1=0,S2=0;
    cin>>n;
    cout<<"n=";

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>v[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        S1=S1+v[i][i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i+j == n-1)
            {
                S2=S2+v[i][j];
            }
        }
    }
    cout<<S1<<S2;
    return 0;
}
