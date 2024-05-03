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
        string ss;
        cin >> ss;

        long long flag = 0;
        vector<long long> arr;

        for (int i = 0; i < n; i++)
        {
            if (ss[i] == 'L')

            {
                arr.push_back((n - 1 - i) - i);
                flag += i;
            }
            else
            {

                arr.push_back(i - (n - 1 - i));
                flag += n - 1 - i;
            }
        }

        sort(arr.begin(), arr.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                flag += arr[i];
            }
            cout << flag << " ";
        }

        cout << endl;
    }

    return 0;
}