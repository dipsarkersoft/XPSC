#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsPrime(ll n)
{
    if (n == 1)
    {
        return false;
    }

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
};

bool IsPerfectSqrt( ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
};

int main()
{

    int n;
    cin >> n;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {

        if (IsPrime(sqrtl(arr[i]))  &&  IsPerfectSqrt(arr[i]))
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