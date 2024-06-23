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
        string ss, ss1;
        cin >> ss >> ss1;
        bool flag = false;
        for (int i = 0; i < ss.size() - 1; i++)
        {
            if (ss[i] == ss1[i] && ss[i + 1] == ss1[i + 1] && ss[i] == '0' && ss1[i] == '0' && ss[i + 1] == '1' && ss1[i + 1] == '1')
            {
                flag = true;
                break;
            }
        }

        if (flag)
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