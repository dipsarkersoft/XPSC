#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> arr(a);
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        long long ans = 0, flag = 0;

        for (int i = 0; i < a; i++)
        {
            if (arr[i] <= c)
            {
                flag++;

                if (i == a - 1 || arr[i + 1] > c)
                {
                    if (flag >= b)
                    {
                        long long x = abs(flag - b + 1);
                        ans += (x * (x + 1)) / 2;
                    }

                    flag = 0;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}