#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szo,szo2;
    cout << "kerem a beolvasando szot";
    getline (cin, szo);
    int elofordul=0;
    size_t hely;
    hely = szo.find("r");
    if (hely!= string::npos) {
        szo.replace (hely, 1, "o");
    }
    while(hely!= string::npos) {
        hely= szo.find ("r", hely+1);
        if (hely!= string::npos) {
            szo.replace (hely, 1, "o");
        }
    }
    hely = szo.find("m");
    if (hely!= string::npos) {
        szo.replace (hely, 1, "i");
    }
    while(hely!= string::npos) {
        hely= szo.find ("m", hely+1);
        if (hely!= string::npos) {
            szo.replace (hely, 1, "i");
        }
    }
     hely = szo.find("s");
    if (hely!= string::npos) {
        szo.replace (hely, 1, "o");
    }
    while(hely!= string::npos) {
        hely= szo.find ("s", hely+1);
        if (hely!= string::npos) {
            szo.replace (hely, 1, "o");
        }
    }
     hely = szo.find("p");
    if (hely!= string::npos) {
        szo.replace (hely, 1, "o");
    }
    while(hely!= string::npos) {
        hely= szo.find ("p", hely+1);
        if (hely!= string::npos) {
            szo.replace (hely, 1, "o");
        }
    }
     hely = szo.find("r");
    if (hely!= string::npos) {
        szo.replace (hely, 1, "o");
    }
    while(hely!= string::npos) {
        hely= szo.find ("r", hely+1);
        if (hely!= string::npos) {
            szo.replace (hely, 1, "o");
        }
    }
     hely = szo.find("t");
    if (hely!= string::npos) {
        szo.replace (hely, 1, "o");
    }
    while(hely!= string::npos) {
        hely= szo.find ("t", hely+1);
        if (hely!= string::npos) {
            szo.replace (hely, 1, "o");
        }
    }
    cout << szo << szo2 << endl;


    return 0;
}
