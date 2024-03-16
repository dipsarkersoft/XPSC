#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;

   vector<bool>ar(n+1,false);

   
   for (int i = 0; i <n-1; i++){

     int value;
     cin>>value;

     ar[value]=true;
    
   }
for (int i = 1; i <= n; i++){

    
     if(!ar[i]){

        cout<<i<<endl;
        break;

     }
    
   }


    return 0;
}


