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
        ll a, b, k;
        cin >> a >> b >> k;
        ll flag = 0;
        while (true)
        {
            if (b % k == 0 && b / k >= a)
            {
                b /= k;
                flag++;
            }
            else if (b % k == 0)
            {
                flag += b - a;
                break;
            }
            else
            {
                flag += b % k;
                b -= b % k;
            }
        }

        cout << flag << endl;
    }
    return 0;
}