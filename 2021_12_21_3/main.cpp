#include <iostream>

using namespace std;
int Fib (long n){
    if (n ==0){return 0;}
    if (n==1){return 1;}
    return Fib(n-1)+ Fib(n-2);
}

int main()
{
    long n;
    cout << "kerem a szamot" << endl;
    cin >>n;
    cout << " a Fibonacci sorozat " << Fib(n);

    return 0;
}
