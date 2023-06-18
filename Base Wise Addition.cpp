#include <bits/stdc++.h>
using namespace std;
int convert(int n,int b)
{
  int k=0,r=0,d;
  while(n)
  {
    d=n%10;
    r+=pow(b,k)*d;
    n=n/10;
    k++;
  }
  return r;
}
void sum(int n1,int n2,int p)
{
  int s=n1+n2,r=0;
  int f=0;
  vector<int> v1;
  while(s)
  {
    r=s%p;
    v1.push_back(r);
    s/=p;
  }
  for(int i=v1.size()-1;i>=0;i--)
  cout<<v1[i];
}
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  int n1=convert(a,c);
  int n2=convert(b,c);
  sum(n1,n2,c);
  return 0;
}