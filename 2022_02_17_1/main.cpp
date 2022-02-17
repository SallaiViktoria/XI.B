#include <iostream>
#include <fstream>

using namespace std;

short xlehet[] = {0,0,-1, 1};
short ylehet[] = {-1,1, 0, 0};
void kiir(int tomb[100][100], int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << tomb[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool lehet(int tomb[100][100], int n, int m, int xpos, int ypos)
{
    if (xpos <0 )
    {
        return false;
    }
    if (xpos > n-1)
    {
        return false;
    }
    if (ypos <0 )
    {
        return false;
    }

    if (ypos > m-1)
    {
        return false;
    }
    if (tomb[xpos][ypos] == 1)
    {
        return false;
    }
    if (tomb[xpos][ypos] == 2)
    {
        return false;
    }
    return true;
}

void backtrack(int tomb[100][100], int n, int m, int xpos, int ypos)
{
    if ((xpos == n-1) && (ypos == m-1))
    {
        kiir(tomb, n, m);
        return ;
    }
    for(int i = 0; i<4; i++)
    {
        if (lehet(tomb, n, m, xpos+xlehet[i], ypos+ylehet[i]))
        {
            int tempxpos = xpos+xlehet[i];
            int tempypos = ypos+ylehet[i];
            int templabirintus[100][100];

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    templabirintus[i][j] = tomb[i][j];
                }
            }
            templabirintus[tempxpos][tempypos] = 2;
            backtrack(templabirintus,  n,  m,  tempxpos,  tempypos);
        }
    }
}

int main()
{
    int a[100][100];
    ifstream inputfile("labirintus.in");
    int n, m;
    inputfile >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)

        {
            inputfile >> a[i][j];
        }
    }
    a[0][0] = 2;
     backtrack(a,  n,  m,  0,  0);
    return 0;
}
