/**
 author:  dip_sarker
02July2024  23:35:20
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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int sum = 0, sum1 = 0;
        vector<int> dem;

        for (int i = 0; i < n; i++)
        {

            dem = arr;
            dem[i] = 1;
            int dem1 = 0;

            for (int j = 0; j < n - 1; j++)
            {

                dem1 += abs(dem[j] - dem[j + 1]);
            }
            sum = max(sum, dem1);
        }

        for (int i = 0; i < n; i++)
        {

            dem = arr;
            dem[i] = k;
            int dem2 = 0;

            for (int j = 0; j < n - 1; j++)
            {

                dem2 += abs(dem[j] - dem[j + 1]);
            }
            sum1 = max(dem2, sum1);
        }

        cout << max(sum, sum1) << endl;
    }

    return 0;
}