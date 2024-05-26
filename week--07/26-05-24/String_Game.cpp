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

        int flag = 0;
        stack<char> st;

        for (auto c : ss)
        {
            if (!st.empty() && st.top() != c)
            {
                st.pop();
                flag++;
            }
            else
            {
                st.push(c);
            }
        }

        if (flag % 2 != 0)
        {
            cout << "Zlatan" << endl;
        }
        else
        {
            cout << "Ramos" << endl;
        }
    }

    return 0;
}