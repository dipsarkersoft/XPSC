#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s;
    cin >> n >> s;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long l = 0, r = 0;
    long long ans = 0, sum = 0;

    while (r < n)
    {

        sum += arr[r];

        if (s <= sum){

            while (s <= sum)
            {
                ans+=n-r;
                sum-=arr[l];
                l++;
            }
           
        }
        r++;
    }

        cout << ans << endl;
    

    return 0;
}