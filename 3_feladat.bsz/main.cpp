#include <iostream>

using namespace std;

int main()
{
    int v[100][100],i,j,n,S1=0,S2=0,S3=0,S4=0;
cin>>n;

ifstream in("input.txt");
ofstream out("output.txt");

for(i=0;i<n;i++){
for(j=0;j<n;j++){
    in>>v[i][j];
}
}
while (in>>v[i][j]){
  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    if(i<j&&i+j<n-1){
    S1=S1+v[i][j];
    }
    if(i<j&&i+j>n-1){
    S2=S2+v[i][j];
    }
    if(i>j&&i+j<n-1){
    S3=S3+v[i][j];
    }
    if(i>j&&i+j>n-1){
    S4=S4+v[i][j];
    }
  }
  }
}
  out<<S1<<S2<<S3<<S4<<endl;
  in.close();
  out.close();
    return 0;
}
