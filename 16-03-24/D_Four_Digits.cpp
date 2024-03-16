#include<bits/stdc++.h>
using namespace std;

int main(){

   string s;
   cin>>s;
  
   int len=s.length();

   if(len==4){

     cout<<s;

   }
   else{

    for(int i=0;i<4-len;i++){
       cout<<"0";
    }
    cout<<s<<endl;
   }
    
    


    

   
    return 0;
}