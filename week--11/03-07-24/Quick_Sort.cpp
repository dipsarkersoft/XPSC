/**
 author:  dip_sarker  
03July2024  23:40:37
 **/

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        int st=0;

        for(int i=0;i<n;i++){
            if(arr[i]==st+1){
                st++;
            }
            
        }

        int ans=n-st;

        cout<<(ans+k-1)/k<<endl;


    }
   
    return 0;
}