#include<bits/stdc++.h>
using namespace std;

int main(){
    string S1,S2;
    cin>>S1>>S2;
    int flag=0;

    for (int i = 0; i < S1.size(); i++)
    {
        if(S1[i]!=S2[i]){
            flag++;
        }
    }
    cout<<flag<<endl;
    

   
    return 0;
}