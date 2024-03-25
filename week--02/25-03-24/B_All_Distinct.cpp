#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while (t--){

    int n;
    cin>>n;
    set<int>st;

    for (int i = 0; i < n; i++){
        int val;
        cin>>val;
        st.insert(val);

    }

    int SZ=st.size();

    if((n-SZ)%2==0){
        cout<<SZ<<endl;
    }
    else{
        cout<<SZ-1<<endl;
    }


    }
    
   
   
    return 0;
}