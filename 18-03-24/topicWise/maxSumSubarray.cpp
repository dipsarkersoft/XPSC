
#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        int l=0,r=0;
        long long ans=0,flag=0;
        
    while(r<N){
        
        flag=flag+Arr[r];
        
        if((r-l+1)==K ){
            
            ans=max(flag,ans);
            flag=flag-Arr[l];
            l++;
            r++;
        }
        else{
            r++;
        }
        
        
    }
    return ans;
        
    }
        
};

