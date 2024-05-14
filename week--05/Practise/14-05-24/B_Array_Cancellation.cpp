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
        long long flag = 0;
        for (int i = 0; i < n; i++)
        {

            flag += arr[i];

            if (flag < 0)
            {
                flag = 0;
            }
        }

        cout << flag << endl;
    }

    return 0;
}