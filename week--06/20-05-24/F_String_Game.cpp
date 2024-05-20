#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, p;
    cin >> s >> p;

    int n = s.size(), m = p.size();

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1);

        for (int i = 0; i < mid; i++)
        {
            bad[arr[i]] = true;
        }

        int j = 0;
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == p[j] && !bad[i + 1])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                break;
            }

            ;
        }

        return found;
    };

    int l = 0, r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}