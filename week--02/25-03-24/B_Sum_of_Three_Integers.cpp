#include<bits/stdc++.h>
using namespace std;

int main(){
   int s,t;

   cin>>s>>t;

   int ans=0;

   for (int i = 0; i <=s; i++){
     for (int j = 0; j <=s; j++){

        int flag=t-i-j;

        if(flag >= 0 && flag <= s)
         ans++;
       

   
   }
   
   }
   cout<<ans<<endl;
   
    return 0;
}