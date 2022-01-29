#include <iostream>

using namespace std;

void Torony(int k,char A,char B,char C)
{
if(k==1)
  cout<<"(" <<A<<","<<C<<") ";
else
{
  Torony(k-1,A,C,B);
  cout<<"("<<A<<","<<C<<" ) ";
  Torony(k-1,B,A,C);
}
}
int main()
{
int n;
char A='A',B='B',C='C';
cin >> n;
Torony(n,A,B,C);
return 0;
}
