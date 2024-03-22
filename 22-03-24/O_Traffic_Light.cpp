#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){

        long long n;
        char c;
        cin>>n>>c;

        string SS;
        cin>>SS;


        if(c=='g'){
            cout<<0<<endl;
        }
        else{

            SS+=SS;
            long long ans=0;
            long long flag=0;

            for (long long i = 2*n-2; i >=0; i--)
            {
                if(SS[i] == 'g')
                   flag = 0;

                if(SS[i] == c)
                ans = max(ans,flag);
                flag++;
            }

            cout<<ans<<endl;
        
        }
    }
    
   
    return 0;
}

