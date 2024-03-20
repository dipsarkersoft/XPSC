#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
   cin>>n>>m;
   long long arr1[n],arr2[m];


   vector<long long>v;

   for (int i = 0; i < n; i++){
    cin>>arr1[i];
   }
   for (int i = 0; i < m; i++){
    cin>>arr2[i];
   }

   int l=0,r=0;

   while ( l<n or r < m ){

    
   if(l>=n){
    v.push_back(arr2[r]);

    r++;
   }

   else if(r>=m){
     v.push_back(arr1[l]);
     l++;
   }

   else if(arr1[l]<arr2[r]){

    v.push_back(arr1[l]);
    l++;
   }
   else{

    v.push_back(arr2[r]);
    r++;

   }

    
    
   }

   for(int val:v){
    cout<<val<<" ";
   }

   

   
   
    return 0;
}






