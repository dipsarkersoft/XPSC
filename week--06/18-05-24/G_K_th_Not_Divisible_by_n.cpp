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

        ll l = 0, r = n * m, ans = 0, mid;

        while (l <= r)
        {
            mid = (l + r) / 2;

            ll cnt = mid - (mid / n);

            if (cnt >= m)
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
    }

    return 0;
}