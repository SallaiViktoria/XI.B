#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s, milyen;
    cout << "Kerem a szot";
    cin  >>s;
    cout << "Kicsi/Nagy";
    cin >> milyen;
    int pos ='a'- 'A' ;
    for (int i=0; i< s.size(); i++) {
        if (milyen== "Nagy") {
            (s[i] >= 'a'){
                s[i]-= pos;
            }
        }
        if (milyen == "Kicsi"){
            if( s[i]<= 'Z'){
                s[i] += pos;
            }
        }
    }
    cout << s << endl;
}
