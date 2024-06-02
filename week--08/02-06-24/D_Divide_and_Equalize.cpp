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
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {

            for (int j = 2; j * j <= arr[i]; j++)
            {

                if (arr[i] % j == 0)
                {
                    while (arr[i] % j == 0)
                    {
                        mp[j]++;
                        arr[i] = arr[i] / j;
                    }
                }
            }

            if (arr[i] > 1)
                mp[arr[i]]++;
        }

        bool flag = true;

        for (auto [x, y] : mp)
        {
            if (y % n != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
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