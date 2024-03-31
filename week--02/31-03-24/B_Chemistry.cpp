#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;

        string ss;
        cin>>ss;

        int flag=0;
        unordered_map<char,int>Ump;
        for (int i = 0; i < n; i++)
        {
            Ump[ss[i]]++;
        }


        for(auto it:Ump){
            if(it.second % 2!=0){
                flag++;
            }
        }

        if(k>=flag-1 &&k<=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        

    }
    



    return 0;
}