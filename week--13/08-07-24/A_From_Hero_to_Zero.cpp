/**
 author:  dip_sarker
08July2024  22:02:05
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
        ll a, b;
        cin >> a >> b;

        ll ans = 0;
        while (a != 0)
        {
            if (b > a)
            {
                ans += a;
                break;
            }

            if (a % b == 0)
            {
                a /= b;
                ans++;
            }
            else
            {
                ans += a % b;

                a -= a % b;
            }
        }

        cout << ans << endl;
    }
    return 0;
}