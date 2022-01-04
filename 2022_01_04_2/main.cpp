#include <iostream>

using namespace std;

int fgv ( int n){
    if (n<10){return 1;}
    return 1+ fgv (n/10);

}


int main()
{
    cout << fgv (123) << endl;
    return 0;
}
