#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        priority_queue<int> pq;

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0 && !pq.empty())
            {

                int x = pq.top();
                pq.pop();
                ans += x + arr[i];
            }

            else
            {

                pq.push(arr[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}