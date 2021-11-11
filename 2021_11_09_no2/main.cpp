#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s, milyen;
    cout << "Kerem a szot";
    cin >> s;
    cout << "Kicsi/Nagy";
    cin >> milyen;
    if (milyen == "Nagy"){
        transform (s.begin(), s.end(), s.begin(), :: toupper);
    }
    else{
        transform (s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;

    return 0;
}
