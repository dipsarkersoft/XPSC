#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s;
    cin >> n >> s;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long l = 0, r = 0;
    long long ans = LLONG_MAX, sum = 0;

    int flag = 0;

    while (r < n)
    {

        sum += arr[r];

        if (s <= sum)
        {
            while (s <= sum)
            {
                ans = min(ans, r - l + 1);
                sum -= arr[l];
                l++;
            }
            flag = 1;
        }
        r++;
    }

    if (flag)
    {

        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}