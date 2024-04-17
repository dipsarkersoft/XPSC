#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 0;

        while (true)
        {

            if (n == 0)
            {
                break;
            }
            else
            {
                ans += n;
                n /= 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}