#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
    return __gcd(a,b);
}

ll lcm(ll a,ll b){

    return (a/gcd(a,b))*b;

}

int main(){
   ll n,a,b,p,q,ans=0,ov;
   cin>>n>>a>>b>>p>>q;

   ans+=(n/a)*p;
   ans+=(n/b)*q;
   ov=(n/lcm(a,b));
 
  ans-=ov*(p+q);
  ans+=ov*max(p,q);


   

   cout<<ans<<endl;


    return 0;
}