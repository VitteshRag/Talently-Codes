#include <bits/stdc++.h>
 using namespace std;
 int main()
 {
   int a,b;
   cin>>a>>b;
   vector<int> v;
   for(int i=a;i<=b;i++)
   {
     int f=0;
     for(int j=2;j<=i/2;j++)
     {
       if(i%j==0)
       {
         f=1;
       }
     }
     if(f!=1)
     v.push_back(i);
   }
   cout<<v[0]<<" ";
   int s=1,e=v.size()-1;
   for(int i=1;i<v.size();i++)
   {
     if(i%2==0)
     {
       cout<<v[s]<<" ";
       s++;
     }
     else
     {
       cout<<v[e]<<" ";
       e--;
     }
   }
   return 0;
 }