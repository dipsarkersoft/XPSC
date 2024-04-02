#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
    string ss;
    cin>>ss;

   
    
    
    string flag, check ="meow";

    for (int i = 0; i < n; i++)
    {
        ss[i]=tolower(ss[i]);
       ss[i+1]=tolower(ss[i+1]);

        if(ss[i]!=ss[i+1]){
            flag.push_back(ss[i]);
        }
    }
    
    if(flag==check)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


   }
   
    return 0;
}