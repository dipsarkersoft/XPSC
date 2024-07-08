/**
 author:  dip_sarker
08July2024  21:16:35
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
        ll l, r;
        cin >> l >> r;

        ll flag = 0;
        ll l1 = 2;

        while (2 * l1 <= r)
        {

            l1 *= 2;
            flag++;
        }
        cout << flag + 1 << endl;
    }
    return 0;
}