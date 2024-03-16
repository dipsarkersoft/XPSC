#include<bits/stdc++.h>
using namespace std;

int main(){
   int a,b;
   cin>>a>>b;
   
   int value=0;

   if(a < b){

    for(int i=a;i<=b;i++){
        value++;
    }

    cout<<value<<endl;
   }
   else{

    cout<<value<<endl;

   }

   

    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int a,b;
//    cin>>a>>b;

//    int value=0;
//    if(a<b){

//     value=(b-a)+1;
//     cout << value<<endl;

//    }
//    else{

//      cout << value<<endl;

//    }

   
//     return 0;
// }