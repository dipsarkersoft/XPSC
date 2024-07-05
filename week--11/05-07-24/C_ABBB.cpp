/**
 author:  dip_sarker
05July2024  22:45:34
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
        string ss;
        cin >> ss;
        stack<char> st;

        for (int i = 0; i < ss.size(); i++)
        {
            if (st.empty())
            {
                st.push(ss[i]);
                continue;
            }

            if (ss[i] == 'B' && (st.top() == 'A' || st.top() == 'B'))
            {
                st.pop();
            }
            else
            {
                st.push(ss[i]);
            }
        }

        cout << st.size() << endl;
    }

    return 0;
}