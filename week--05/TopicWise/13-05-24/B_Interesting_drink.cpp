#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1, mid = 0;

        while (l <= r)
        {

            mid = (l + r) / 2;

            if (x >= arr[mid])
            {

                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << l << endl;
    }

    return 0;
}