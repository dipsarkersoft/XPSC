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
        int arr[n][n - 1];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {

                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            mp[arr[i][n - 2]]++;
        }

        int flag = 0;

        for (auto x : mp)
        {
            if (x.second == 1)
            {
                flag = x.first;
            }
        }

        vector<int> ans;

        int last = -1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {

                if (arr[i][n - 2] == flag)
                {

                    ans.push_back(arr[i][j]);
                }

                if (arr[i][n - 2] != flag)
                {
                    last = arr[i][n - 2];
                }
            }
        }
        ans.push_back(last);

        for (int val : ans)
        {
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}