#include<bits/stdc++.h>
using namespace std;


bool Cheak( vector<int>&arr){

    int l=0,r=arr.size()-1;
    bool flag=true;
    

    while (l<r)
    {
        if(arr[l]!=arr[r]){
            flag=false;
            break;
        }
        l++;
        r--;
    }
    
    return flag;

};


int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);

        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }


    int l=0,r=arr.size()-1;

    bool flag=true;
    int x,y;
    
    while (l<r){

        if(arr[l]!=arr[r]){

            x=arr[l];
            y=arr[r];

            flag=false;

            break;
        }

        l++;
        r--;
    }

    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        vector<int>v1,v2;

        for(int i=0; i<n; i++){
            
            if(arr[i]!=x ){
                v1.push_back(arr[i]);
            }

            if(arr[i]!=y){
                v2.push_back(arr[i]);
            }

        }

        bool ans1=Cheak(v1);
        bool ans2=Cheak(v2);

        if(ans1 or ans2){

            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }


     

        



     }
    
   
    return 0;
}