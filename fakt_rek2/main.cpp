#include <iostream>
int fakt(int n)
{
int P = 1;
for (int i=1; i<=n; i++){
    P*=i;
}
return P;
}
int fakt_rek(int n){
   if (n ==1) return 1;
   return n*fakt_rek(n-1);
}

using namespace std;

int main()
{
   cout << fakt_rek(3) << endl;
    return 0;
}
