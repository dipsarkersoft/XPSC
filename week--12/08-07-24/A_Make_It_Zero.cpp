/**
 author:  dip_sarker
08July2024  12:19:28
 **/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n % 2 == 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
        else
        {
            cout << 4 << endl;
            cout << 1 << " " << n << endl;
            cout << 2 << " " << n << endl;
            cout << 1 << " " << 2 << endl;
            cout << 1 << " " << 2 << endl;
        }
    }

    return 0;
}