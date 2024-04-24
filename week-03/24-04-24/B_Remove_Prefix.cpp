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
        set<int> st;

        for (int i = n - 1; i >= 0; i--)
        {

            if (st.find(arr[i]) == st.end())
            {

                st.insert(arr[i]);
            }

            else
            {
                break;
            }

           
        }

         cout << n - st.size() << endl;

    }
        return 0;
    }