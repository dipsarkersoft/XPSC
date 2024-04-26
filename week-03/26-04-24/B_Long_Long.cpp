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

        long long ans = 0, count = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {

            ans += abs(arr[i]);

            if (arr[i] > 0)
            {

                flag = true;
            }

            if (arr[i] < 0 && flag == true)
            {
                count++;
                flag = false;
            }
        }

        cout << ans << " " << count << endl;
    }
    return 0;
}