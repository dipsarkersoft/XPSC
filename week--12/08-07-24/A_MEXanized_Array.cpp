/**
 author:  dip_sarker
08July2024  12:51:22
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
        ll n, k, x, sum = 0;
        cin >> n >> k >> x;

        if ((k - x) > 1 || (n < k))
        {
            cout << -1 << endl;
            continue;
        }

        if (k == x)
            x--;

        for (int i = 0; i < n; i++)
        {
            if (k > i)
            {
                sum += i;
            }
            else
            {
                sum += x;
            }
        }

        cout << sum << endl;
    }

    return 0;
}