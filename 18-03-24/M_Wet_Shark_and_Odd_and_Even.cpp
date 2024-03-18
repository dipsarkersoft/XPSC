#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> odd;
    long long ans = 0, Min = INT_MAX;
    ;

    for (int i = 0; i < n; i++)
    {

        int v;
        cin >> v;
        if (v % 2 == 0)
        {
            ans += v;
        }

        else
        {

            if (v < Min) Min = v;
            
            odd.push_back(v);
        };
    }

    int Sz = odd.size();

    if (Sz % 2 == 0)
    {

        for (int i = 0; i < Sz; i++)
        {
            ans += odd[i];
        }
    }
    else
    {

        for (int i = 0; i < Sz; i++)
        {
            ans += odd[i];
        }
        ans -= Min;
    }

    cout << ans << endl;

    return 0;
}