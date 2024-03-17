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

   int l=0,r=0,flag=0;

   while (r < m) {

while (A[l] < B[r] && l<n){

    flag++;
    l++;

}
r++;
cout<<flag<<" ";

 }

   cout<<endl;
   

   

    return 0;
}