#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<vector<string>>SS(3,vector<string>(n));

        map<string,int>mp;

        for(int i=0;i<3;i++){

            for(int j=0;j<n;j++){

                cin>>SS[i][j];
                mp[SS[i][j]]++;
            
        }}

        int arr[3]={0};
 
        for(int i=0;i<3;i++){

            for(int j=0;j<n;j++){

                if( mp[SS[i][j]]==1){
                    arr[i]+=3;
                }

               else if( mp[SS[i][j]]==2){
                    arr[i]+=1;
                }
                     
            
        }}


cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }
    
   
    return 0;
}