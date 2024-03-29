#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,sum;
   cin>>n>>sum;

   vector<long long>arr(n);

   for (int i = 0; i < n; i++){

    cin>>arr[i];
   }


   long long l=0,r=0,cnt=0;

   long long MaxSum=0;

   while (r<n){

    MaxSum+=arr[r];
    if(MaxSum<=sum){
        cnt+=r-l+1;
        
    }
    else{
        while (MaxSum>sum){
            MaxSum-=arr[l];
            l++; 

        }
        if(MaxSum<=sum){
             cnt+=r-l+1;
        }
    
    }
    r++;
   }

   cout<<cnt<<endl;
   



    return 0;
}