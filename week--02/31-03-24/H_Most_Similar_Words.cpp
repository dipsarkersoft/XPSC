#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int flag = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {

            for (int j = i + 1; j < n; j++)
            {

                int count = 0;

                for (int k = 0; k < m; k++)
                {

                    count += abs(arr[i][k] - arr[j][k]);
                }
                flag = min(flag, count);
            }
        }

        cout << flag << endl;
    }

    return 0;
}