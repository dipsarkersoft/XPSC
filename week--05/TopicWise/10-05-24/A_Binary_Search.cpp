#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t;
    cin >> n >> t;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (t--)
    {
        long long x;
        cin >> x;

        int l = 0, r = n - 1, mid = 0;
        bool flag = false;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                flag = true;
                break;
            }
            else if (arr[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
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