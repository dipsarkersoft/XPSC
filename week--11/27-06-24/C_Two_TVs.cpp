/**
 author:  dip_sarker
27June2024  21:21:10
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

    map<int, int> mp;

    for (int i = 1; i <= t; i++)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    ll val = 0;
    bool flag = false;
    for (auto [x, y] : mp)
    {

        val += y;
        if (val > 2)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}