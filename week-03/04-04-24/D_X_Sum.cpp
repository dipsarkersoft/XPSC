#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                cin >> arr[i][j];
            }
        }

        long long flag = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                long long tmp = 0;
                long long in = i;
                long long jm = j;

                while (in < n && jm < m)
                {
                    tmp += arr[in++][jm++];
                }

                in = i - 1;
                jm = j - 1;

                while (in >= 0 && jm >= 0)
                {
                    tmp += arr[in--][jm--];
                }
                in = i - 1;
                jm = j + 1;

                while (in >= 0 && jm < m)
                {
                    tmp += arr[in--][jm++];
                }
                in = i + 1;
                jm = j - 1;

                while (in < n && jm >= 0)
                {
                    tmp += arr[in++][jm--];
                }

                flag = max(flag, tmp);
            }
        }

        cout << flag << endl;
    }

    return 0;
}