#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        auto ok = [&](ll x)
        {
            ll sum = 0;

            for (int i = 0; i < n; i++)
            {
                if (x - arr[i] > 0)
                {
                    sum += x - arr[i];
                }
            }
            return sum <= m;
        };
        ll l = 1, r = 2e9, ans = -1, mid;

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
    }

    return 0;
}