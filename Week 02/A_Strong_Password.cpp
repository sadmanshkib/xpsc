#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
            char c;
            if(s[i] == 'z')
                c = 'a';
            else
                c = s[i] + 1;
            if (s.size() == 1)
                cout << c;
            else
            {
                if (s[i] == s[i + 1] && flag == false)
                {
                    cout << c;
                    flag = true;
                }
            }
        }
        cout << endl;
    }

    return 0;
}