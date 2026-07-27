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
        int n;
        cin >> n;
        long long int sum = 0;
        vector<int> left, right;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {

            if (i < n / 2 && s[i] == 'L')
                right.push_back(i);
            else if (i >= n / 2 && s[i] == 'R')
                left.push_back(i);

            if (s[i] == 'L')
                sum += i;
            else
                sum += n - i - 1;
        }

        sort(right.begin(), right.end(), greater<int>());

        vector<long long int> ans;

        for (int k = 1; k <= n; k++)
        {
            if (!left.empty() || !right.empty())
            {
                long long int lval = -1, rval = -1;

                if (!left.empty())
                    lval = left.back();
                if (!right.empty())
                    rval = n - right.back() - 1;

                if (lval >= rval && lval != -1)
                {
                    sum -= n - left.back() - 1;
                    sum += lval;
                    left.pop_back();
                }
                else if (rval >= lval && rval != -1)
                {
                    sum -= right.back();
                    sum += rval;
                    right.pop_back();
                }
            }
            ans.push_back(sum);
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}