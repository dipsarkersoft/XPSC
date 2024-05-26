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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool flag = true, ans = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                flag = false;
            }

            if (a[i] < b[i])
            {
                a[i] += 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                ans = false;
                break;
            }
        }

        if (flag || ans)
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