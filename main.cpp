#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szo;
    cout << "kerema beolvasando stringet";
    getline (cin, szo);

    int elofordul=0;
    size_t hely;
    hely =  szo.find("r");
    if (hely! = string::npos) {
        szo.replace (hely, 1, "o");
    }
    while (hely! = string::npos) {
        hely = szo.find ("r", hely+1);
        if (hely!= string::npos) {
            szo.replace (hely, 1, "o");

        }
    }

    return 0;
}
