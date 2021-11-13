#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cout << "Ird be a szot: ";
    getline (cin, s);
    size_t a=s.find ("a");
    size_t e=s.find ("e");
    size_t i=s.find ("i");
    size_t o=s.find ("o");
    size_t u=s.find ("u");

    while(a!= string::npos){
        s.replace(a, 1 , "mpm");
        a=s.find("a", a+3);
        }

     while(e!= string::npos){
        s.replace(e, 1 , "mpm");
        a=s.find("e", e+3);  }

    while (i!= string::npos){
        s.replace(i, 1 , "mpm");
        a=s.find("i", i+3);
        }


      while (o!= string::npos){
        s.replace(o, 1 , "mpm");
        a=s.find("o", o+3);
        }
       while (u!= string::npos){
        s.replace(u, 1 , "mpm");
        a=s.find("u", u+3);
  }

  size_t p= s.find ("p");
  while (p!= string::npos){
    s.insert(p+1, "Z");
    p= s.find("p",p+3);
  }
    cout << s;
    return 0;
}
