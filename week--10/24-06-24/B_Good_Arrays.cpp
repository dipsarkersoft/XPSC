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
        int n;
        cin >> n;
        ll sum = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;

            if (x == 1)
            {
                cnt++;
            }
        }

        if (sum >= cnt + n && n > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}