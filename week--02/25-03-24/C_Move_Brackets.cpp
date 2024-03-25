#include<bits/stdc++.h>
using namespace std;

int main(){
  
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string ss;
        cin>>ss;
        int open=0, ans=0;

        for(int i=0;i<n;i++){

            if(ss[i]=='('){

            open++;

            }

            else{
                if(open>0 &&ss[i]==')'   ){

                    open--;
                                   
                }

                else{

                    ans++;

                }
            }
        }

        cout<<ans<<endl;

        
    }
    

    return 0;

}


