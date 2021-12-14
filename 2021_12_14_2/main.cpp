#include <iostream>

using namespace std;

int a, b;
int lnko (){
   while (a!=b){
    if (a>b){
        a-=b;
    }
    else{
        b-=a;
    }
   }
   return a;
  }
  int lkkt(int &a, int &b){
     return a*b/lnko(a,b);
  }

int main()
{
    a=4;
    b=6;
    cout << lnko() << endl;
    cout <<lkkt() << endl;
    return 0;
}
