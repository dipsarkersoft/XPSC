/**
 author:  dip_sarker
12July2024  23:34:00
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
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll flag = arr[i] + ans;
        cout << flag << " ";
        ans = max(ans, flag);
    }

    return 0;
}