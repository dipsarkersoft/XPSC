/**
 author:  dip_sarker
21June2024  13:16:02
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
    string ss;
    cin >> ss;

    string r = ss;
    reverse(r.begin(), r.end());
    map<char, vector<int>> pos_ss, pos_r;

    for (int i = 0; i < n; i++)
    {
        pos_ss[ss[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    vector<int> perm(n);

    for (char ch = 'a'; ch <= 'z'; ch++)
    {

        for (int i = 0; i < pos_ss[ch].size(); i++)
        {
            perm[pos_r[ch][i]] = pos_ss[ch][i];
        }
    }
    pbds<int> pb;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += pb.order_of_key(perm[i]);
        pb.insert(perm[i]);
    }
    cout << ans << endl;
    return 0;
}