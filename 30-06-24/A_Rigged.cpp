/**
 author:  dip_sarker
30June2024  22:14:08
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

        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
        }

        int ans = arr[0].first;
        bool flag = false;

        for (int i = 1; i < n; i++)
        {

            if (arr[i].first >= ans && arr[i].second >= arr[0].second)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}