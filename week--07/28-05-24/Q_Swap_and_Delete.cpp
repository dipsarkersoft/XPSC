#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ss;
        cin >> ss;
        int o = 0, z = 0;

        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }

        for (int i = 0; i < ss.size(); i++)
        {
            if (ss[i] == '1')
            {
                if (z > 0)
                {
                    z--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (o > 0)
                {
                    o--;
                }
                else
                {
                    break;
                }
            }
        }

        cout << o + z << endl;
    }
    return 0;
}