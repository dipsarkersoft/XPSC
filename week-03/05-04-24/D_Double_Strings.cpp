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
        vector<string> arr(n);
        map<string, bool> mp;

        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            mp[arr[i]] = true;
        }

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {

            int SZ = arr[i].size();
            bool flag = false;

            for (int j = 0; j < SZ; j++)
            {

                string fst = arr[i].substr(j, SZ);
                string snd = arr[i].substr(0, j);

                if (mp[fst] && mp[snd])
                {

                    flag = true;
                }
            }

            if (flag == true)
            {
                ans.push_back(1);
            }
            else
            {
                ans.push_back(0);
            }
        }



        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}