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

        sort(arr.begin(), arr.end(), greater<int>());

        vector<int> pre(n + 1);

        pre[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + arr[i];
        }

        while (k--)
        {
            int x;
            cin >> x;

            if (pre[n - 1] < x)
            {
                cout << -1 << endl;
            }
            else
            {

                int l = 0, r = n - 1, mid = 0, indx = -1;

                while (l <= r)
                {
                    mid = (l + r) / 2;

                    if (x <= pre[mid])
                    {
                        indx = mid;
                        r = mid - 1;
                    }
                    else
                    {
                        l = mid + 1;
                    }
                }

                cout << indx + 1 << endl;
            }
        }
    }
    return 0;
}