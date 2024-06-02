#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> arr;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            if ((n / i) != i)
                arr.push_back(n / i);
        }
    }

    sort(arr.begin(), arr.end());

    if (k <= arr.size())
    {

        cout << arr[k - 1] << endl;
    }

    else
    {
        cout << -1 << endl;
    }

    return 0;
}