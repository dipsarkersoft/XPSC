#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s;
    cin >> n >> s;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long l = 0, r = 0;
    long long ans = 0, sum = 0;

    multiset<long long> mst;

    while (r < n)
    {
        mst.insert(arr[r]);
        long long mn, mx;

        mn = *mst.begin();
        mx = *mst.rbegin();
        if ((mx - mn) <= s)
        {
            ans += (r - l + 1);
        }

        else{

            while (l<r)
            {
                
                mn = *mst.begin();
                mx = *mst.rbegin();

                if ((mx - mn) <= s) break;

                auto it=mst.find(arr[l]);
                mst.erase(it);
                l++;
               
            }

            mn = *mst.begin();
            mx = *mst.rbegin();

           if ((mx - mn) <= s) ans += (r - l + 1);       
    
    }
    r++;
   


    }

     cout<<ans<<endl;

 

    return 0;
}