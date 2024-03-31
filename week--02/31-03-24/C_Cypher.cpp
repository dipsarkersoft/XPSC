#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while (t--)
   {
     int n;
     cin>>n;
     vector<int>arr(n);
     for (int i = 0; i <n; i++)
     {
        cin>>arr[i];
     }
     
     for(int i=0;i<n;i++){
        int x;
        cin>>x;

        for (int j = 0; j < x; j++)
        {
            char c;
            cin>>c;
            if(c=='D'){
                arr[i]++;
                if(arr[i]==10){
                    arr[i]=0;
                }
            }
            if(c=='U'){
                arr[i]--;
                if(arr[i]==-1){
                    arr[i]=9;
                }
            }
        }
        
     }

      for(int val: arr){
    cout<<val<<" ";
   }
   cout<<endl;

   }

  
   
    return 0;
}