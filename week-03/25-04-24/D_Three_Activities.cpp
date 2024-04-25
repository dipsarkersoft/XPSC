#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{

    return a.first > b.first;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<pair<ll, ll>> arr(n);
        vector<pair<ll, ll>> arr1(n);
        vector<pair<ll, ll>> arr2(n);

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr[i] = {val, i};
        }

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr1[i] = {val, i};
        }
        for (int i = 0; i < n; i++)
        {

            int val;
            cin >> val;
            arr2[i] = {val, i};
        }

        sort(arr.begin(), arr.end(), cmp);
        sort(arr1.begin(), arr1.end(), cmp);
        sort(arr2.begin(), arr2.end(), cmp);

        ll ans = INT_MIN;

        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                for (int k = 0; k < 3; k++)
                {

                    if (
                        arr[i].second != arr1[j].second && arr[i].second != arr2[k].second &&
                        arr1[j].second != arr2[k].second)
                    {

                        ans = max(arr[i].first + arr1[j].first + arr2[k].first, ans);
                    }
                }
            }
        }

        cout << ans << endl;
    };

    return 0;
}