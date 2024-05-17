#include <bits/stdc++.h>

#define ll long long
using namespace std;

const int N = 1e4;

int main()
{

    vector<ll> arr;
    for (int i = 1; i <= N; i++)
    {
        arr.push_back(pow(i, 3));
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool found = false;

        for (int i = 0; i < N; i++)
        {
            if (arr[i] >= x)
                break;

            int l = 0, r = N - 1, mid;

            ll need = x - arr[i];
            bool ok = false;

            while (l <= r)
            {
                mid = (l + r) / 2;

                if (arr[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (arr[mid] > need)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ok)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}