#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int ar[n];
  string sr[21]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
  string s[n];
  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
    s[i]=sr[ar[i]];
  }
  sort(s,s+n);
  for(int i=0;i<n;i++)
  cout<<s[i]<<" ";
  return 0;
}