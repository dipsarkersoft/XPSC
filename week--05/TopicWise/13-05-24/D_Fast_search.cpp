#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   vector<int>arr(n);

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   sort(arr.begin(),arr.end());

   int t;
   cin>>t;


    while(t--){
        int a,b;
        cin>>a>>b;

        auto l=lower_bound(arr.begin(),arr.end(),a);
        auto r=upper_bound(arr.begin(),arr.end(),b);


        
        cout<<r-l<<" ";


    

    }
    return 0;
}