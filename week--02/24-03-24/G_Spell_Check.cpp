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
    string m="Timur";
    int flag=0;


    if(n==5){

        

           sort(m.begin(),m.end());
        sort(ss.begin(),ss.end());

        for (int i = 0; i <n; i++)
        {
            if(m[i]!=ss[i]){
                flag=1;
       
            }
         
        }

        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        
        cout<<"NO"<<endl;
     
        

    }


   }
   
    return 0;
}