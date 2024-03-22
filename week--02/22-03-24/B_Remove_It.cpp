#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,t;
   cin>>n>>t;
   vector<int>v;

   for (int i = 0; i < n; i++)
   {
    int x;
    cin>>x;
    if(x!=t){
        v.push_back(x);
    };
    
   }

   for (int val:v)
   {
    cout<<val<<" ";
   }
   
   
    return 0;
}