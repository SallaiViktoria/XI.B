#include <iostream>

using namespace std;

int szamjegy (int n){
    if (n==0){return 1;}
    return n%10*szamjegy(n/10);
}

int main()
{
    cout <<  szamjegy (124) << endl;
    return 0;
}
