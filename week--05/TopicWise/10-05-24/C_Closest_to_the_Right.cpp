#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (t--)
    {
        int v;
        cin >> v;
        int l = 0, r = n - 1, mid, indx = n;

        while (l <= r)
        {
            mid = (l + r) / 2;

            if (v <= arr[mid])
            {

                r = mid - 1;
                indx = mid;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << indx + 1 << endl;
    }

    return 0;
}