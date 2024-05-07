#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0, odd = 0;
        int l = 0, r = 0;

        while (r < n)
        {

            if ((arr[r] & 1) != 0)
            {
                odd++;
            }

            if ((r - l + 1) == k)
            {
                if (odd )
                {
                    ans++;
                }

                if ((arr[l] & 1) != 0)
                {
                    odd--;
                }
                l++;
            };

            r++;
        }

        cout << ans << endl;
    }

    return 0;
}