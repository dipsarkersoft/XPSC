#include<bits/stdc++.h>
using namespace std;

int main(){
    
   int a,b;
   cin>>a>>b;

  int flag=0;

   if(a>b){

    flag=a+(a-1);

   }

   else if(b>a){

    flag=b+(b-1);
    
   }

   else{
    flag=a+b;
   }
   
   cout<<flag<<endl;


    return 0;
}