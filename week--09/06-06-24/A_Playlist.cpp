#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> st;
    int l = 0, r = 0, cnt = 0;

    while (r < n)
    {
        while (st.find(arr[r]) != st.end())
        {
            st.erase(arr[l]);
            l++;
        }

        st.insert(arr[r]);
        cnt = max(cnt, (r - l + 1));
        r++;
    }

    cout << cnt << endl;

    return 0;
}