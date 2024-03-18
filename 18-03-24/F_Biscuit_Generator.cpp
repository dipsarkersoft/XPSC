#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

  
        int flag = 0;
        int i=a;


        while (i <= t){

            flag += b;
            i+=a;
        }

        cout << flag;
    

    return 0;
}


