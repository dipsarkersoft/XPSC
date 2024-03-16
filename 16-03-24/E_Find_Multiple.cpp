#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int flag=-1;

    for (int i = a; i <=b; i++)
    {
        if(i%c== 0 ){

            flag=i;
            
            
        }  
        
    }
    if(flag==-1){
        cout<<-1<<endl;
    }
    else{
        cout<<flag<<endl;
    }

    
   
    return 0;
}
