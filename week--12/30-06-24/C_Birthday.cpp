/**
 author:  dip_sarker
30June2024  22:41:48
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
    vector<int> arr(n),ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    int l = 0, r = n - 1;

   

    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            ans[l] = arr[i];
            l++;
        }
        else
        {
            ans[r] = arr[i];
            r--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}