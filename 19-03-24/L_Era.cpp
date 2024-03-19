#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];

        int ans=0;

        for (int i = 1; i <=n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 1; i <=n; i++){

            if(arr[i]>i){

                int flag=arr[i]-i;

                ans=max(flag,ans);
                
            }
            
        }

        cout<<ans<<endl;
        
        
    }
    
   
    return 0;
}