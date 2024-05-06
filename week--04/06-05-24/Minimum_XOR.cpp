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
    int XOR=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        XOR^=arr[i];
        
    }


int flag=XOR;


 for (int i = 0; i < n; i++)
    {
        flag=min(flag,(XOR^arr[i]));
        
    }


cout<<flag<<endl;


    
   }
   
    return 0;
}