#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    auto ok = [&](ll x)
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {

            total += (x / arr[i]);
            if (total >= t)
                return true;
        }

        return false;
    };

    ll l = 1, r = 1e18, mid, ans;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}