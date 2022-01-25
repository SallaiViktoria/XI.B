#include <iostream>

using namespace std;

int minimum (int balindex, int jobbindex,  int tomb[]){
    if (balindex==jobbindex){
        return tomb [jobbindex];
    }
    int kozep =(balindex+ jobbindex)/2;
    int min1 = minimum (balindex, kozep, tomb);
    int min2 = minimum (kozep+1, jobbindex, tomb);
    if (min1 < min2 ){
        return min1;
    }
    else {
        return min2;
    }
}

int main()
{
    int tomb[5]={1,3,1,2,7};
    cout << minimum(0,4,tomb);
    return 0;
}

