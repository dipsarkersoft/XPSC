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

    sort(arr.begin(), arr.end());

    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {

            // cnt+=(arr[i]<mid?(mid-arr[i]):0);
            if (arr[i] < mid)
            {
                cnt += (mid - arr[i]);
            }
            else
            {
                cnt += 0;
            };
        }

        return cnt <= t;
    };

    ll l = 1, r = 2e9, mid, ans;

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