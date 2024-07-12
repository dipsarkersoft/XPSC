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
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int flag = 0;
    int mn = min(s1.size(), s2.size());

    for (int i = 0; i < mn; i++)
    {
        if (s1[i] == s2[i])
            flag++;
        else
            break;
    }

    int ans = s1.size() - flag;
    ans -= s2.size() - flag;
    cout << ans << endl;

    return 0;
}