/**
 author:  dip_sarker
07July2024  21:59:31
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
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i < n - 1)
            {
                mx = max(mx, arr[i]);
            }
        }

        cout << mx + arr[n - 1] << endl;
    }
    return 0;
}