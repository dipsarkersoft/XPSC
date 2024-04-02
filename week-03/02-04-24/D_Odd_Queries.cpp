#include <bits/stdc++.h>

using namespace std;

int main()
{


    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {

        long long n, m;
        cin >> n >> m;
        vector<long long> arr(n+1);

        for (int i = 1; i <=n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> pre(n+1);


        for (int i = 1; i <=n; i++)
        {

            pre[i] = arr[i] + pre[i - 1];
        }


        while (m--)
        {
            long long l, r, k;
            cin >> l >> r >> k;

            long long sum=pre[n];

            sum-=pre[r]-pre[l-1];

            sum+=((r-l+1)*k);
    
            if (sum % 2 == 1)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }


        }
    }

    return 0;
}