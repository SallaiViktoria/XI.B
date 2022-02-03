#include <iostream>

using namespace std;

const int N = 8;

int kontor = 0;

bool lehet(int sor, int oszlop,  char board[][N])
{
    int i = sor;
    int j = oszlop;
 while(i >= 0 && j >= 0)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }
    i = sor;
    j = oszlop;
      while(i >= 0 && j < N)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }

        i--;
        j++;
    }

    i = sor;
    j = oszlop;
    while(i >= 0)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }

        i--;
    }

    return true;
}

void uresit( char board[][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            board[i][j] = 'X';
        }
    }
}

void kiir( char board[][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << board[i][j] << " ";
        }

        cout << endl;
    }
}

bool backtracking(int sor, char board[][N] )
{
    if(sor == N)
    {
        kontor++;

        kiir(board);
        cout << endl;

        return true;
    }
     for(int oszlop = 0; oszlop < N; oszlop++)
    {
         if(lehet(sor, oszlop,  board))
        {
            char tempboard[N][N];
            for(int i = 0; i< N; i++){
                for(int j = 0; j < N; j++){
                    tempboard[i][j] = board[i][j];
                }
            }
            tempboard[sor][oszlop] = 'Q';
              backtracking(sor + 1, tempboard);
        }

    }
}


int main()
{
     char board[N][N];
      uresit(board);
       backtracking(0, board);

    cout << kontor << endl;
    return 0;
}
