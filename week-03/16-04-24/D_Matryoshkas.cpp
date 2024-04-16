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
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        int flag = 0;

                for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] != 0)
            {
                flag++;

                while (mp[arr[i]] > 0)
                {
                    mp[arr[i]]--;
                    arr[i]++;
                }
            }
        }
        cout << flag << endl;
    }

    return 0;
}