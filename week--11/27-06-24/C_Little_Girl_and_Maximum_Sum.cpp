/**
 author:  dip_sarker
25June2024  16:47:31
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
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> diff(n + 2);
    while (q--)
    {

        int l, r;
        cin >> l >> r;
        l--, r--;

        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {

        diff[i] = diff[i] + diff[i - 1];
    }

    ll flag = 0;
    sort(diff.begin(), diff.end(), greater<int>());
    sort(arr.begin(), arr.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {

        flag += (1LL*diff[i] * arr[i]);
    }

    cout << flag << endl;

    return 0;
}