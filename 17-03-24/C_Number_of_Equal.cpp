#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,m;
   cin>>n>>m;
   int A[n],B[m];

   for (int i = 0; i < n; i++){
    cin>>A[i];
   }

   for (int i = 0; i < m; i++){
    cin>>B[i];
   }

   int l=0,r=0;
   long long flag=0;

   while (l<n && r<m){

    int c1=0,c2=0,current=A[l];

    while(A[l]==current && l<n ){
        c1++;
        l++;

    }

    while(current > B[r]&&  r<m ){
        r++;
    }

    while(B[r]==current &&r <m)
    {
        c2++;
         r++;
    }
   
    flag+=(1LL*c1*c2);


   }

   cout<<flag<<endl;
   

   

   

    return 0;
}