#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {

        int value = s[i] - 'a';

        count[value]++;
    }

    int flag = 0;

    for (int i = 0; i < 26; i++)
    {

        

        if (count[i] == 0)
        {

            char ans = i + 'a';

            cout << ans << endl;

            flag = 1;

            break;
        }
    }

    if (flag == 0)
    {
        cout << "None" << endl;
    }

    return 0;
}
