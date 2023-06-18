#include<bits/stdc++.h>
  using namespace std;
  int main()
  {
    int n;
    cin>>n;
    string sr[8]={"Little","Ring","Middle","Index","Thumb","Index","Middle","Ring"};
    int r=n%8;
    if(r==0)
    cout<<"Ring"<<endl;
    else
    cout<<sr[r-1]<<endl;
    return 0;
  }