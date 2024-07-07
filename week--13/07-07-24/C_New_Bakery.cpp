/**
 author:  dip_sarker
07July2024  22:08:43
 **/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll sm(ll n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        ll ans = 0;

        if (a > b)
        {
            cout << n * a << endl;
        }
        else
        {
            ans = sm(b) - sm(max(b - n, a));
            ans += a * (n - (b - (max(b - n, a))));
            cout << ans << endl;
        }
    }

    return 0;
}