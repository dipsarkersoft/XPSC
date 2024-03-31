#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
    map<int,int>mp;
    int mx=0;
    for(int i=0;i<n;i++){

        int val;
        cin>>val;
        mp[val]++;
        mx=max(mx,mp[val]);
    }

    int count=0,cr=mx;
    while (cr!=n)
    {
        count++;
        if(cr*2>=n){
            count+=n-cr;
            break;
        }
        count+=cr;
        cr*=2;
    }
    

cout<<count<<endl;
    
   }
   
    return 0;
}