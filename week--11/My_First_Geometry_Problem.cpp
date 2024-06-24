/**
 author:  dip_sarker

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
        string ss;
        cin >> ss;
        int l = 0, r = 0, u = 0, d = 0;

        if (ss[0] == '1')
        {
            l = -10;
        }
        if (ss[1] == '1')
        {
            r = 10;
        }

        if (ss[2] == '1')
        {
            u = 10;
        }
        if (ss[3] == '1')
        {
            d = -10;
        }

        cout << (r - l + 1) * (u - d + 1) << endl;
    }

    return 0;
}