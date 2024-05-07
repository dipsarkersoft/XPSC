#include <bits/stdc++.h>
using namespace std;

const int N = (1 << 15);
vector<int> palindrome;

void palinDrome()
{

    for (int i = 0; i < N; i++)
    {

        string ss = to_string(i);
        int len = ss.length();
        bool ok = true;

        for (int i = 0; i < (len / 2); i++)
        {

            if (ss[i] != ss[len - i - 1])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            palindrome.push_back(i);
        }
    }
}

int main()
{

    palinDrome();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(N), arr;

        for (int i = 0; i < n; i++)
        {

            int val;
            cin >> val;
            cnt[val]++;
            arr.push_back(val);
        }

        long long ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < palindrome.size(); j++)
            {

                int curr = (arr[i] ^ palindrome[j]);

                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << endl;
    }

    return 0;
}