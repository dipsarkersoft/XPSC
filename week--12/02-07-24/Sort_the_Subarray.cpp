/**
 author:  dip_sarker
02July2024  22:35:40
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
        vector<int> arr(n), arr2(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
            cin >> arr2[i];

        int l = 0, r = n - 1;

        while (arr[l] == arr2[l])
        {

            if (arr[l] != arr2[l])
            {
                break;
            }
            l++;
        }

        while (arr[r] == arr2[r])
        {
            if (arr[r] != arr2[r])
            {
                break;
            }
            r--;
        }

        while (l > 0 && arr2[l - 1] <= arr2[l])
        {
            l--;
        }

        while (r < n - 1 && arr2[r + 1] >= arr2[r])
        {
            r++;
        }

        cout << l + 1 << " " << r + 1 << endl;
    }

    return 0;
}