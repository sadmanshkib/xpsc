#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int a[27] = {0};
    for (char c : s)
    {
        a[c - 65]++;
    }

    bool pal = true;

    int n = s.size();
    if (n == 1 || n == 2)
        cout << s << endl;
    else
    {
        if (n % 2 == 0)
        {
            for (int i = 0; i < 27; i++)
            {
                if (a[i] % 2 != 0)
                {
                    pal = false;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < 27; i++)
            {
                int odd = 0;
                if (odd > 1)
                {
                    pal = false;
                    break;
                }

                if (a[i] % 2 != 0)
                {
                    odd++;
                }
            }
        }
        if(!pal)
            cout << "NO SOLUTION" << endl;
        else
            {
                for (int i = 0; i < 27; i++)
                {
                    if(a[i] != 0)
                    {
                        int z = a[i];
                        while (a[i] != z/2)
                        {
                            char k = a[i]+65;
                            cout << k;
                            a[i]--;
                        }
                        
                    }
                }
                for (int i = 26; i >= 0; i--)
                {
                    if(a[i] != 0)
                    {
                        int z = a[i];
                        while (a[i] != z/2)
                        {
                            char k = i+65;
                            cout << k;
                            a[i]--;
                        }
                        
                    }
                }
                
            }

    }

    

    return 0;
}