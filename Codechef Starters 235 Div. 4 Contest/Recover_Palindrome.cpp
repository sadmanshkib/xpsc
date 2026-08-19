#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = n-1;
        string ans = "YES";
        while (l<=r) 
        {
            if(l == r)
                if(s[l] == '?')
                   {
                     ans = "NO"; 
                     break;
                   }
            else
                 {
                      ans = "YES"; 
                      break;
                 }
            
            if( s[l] == '?' && s[r] == '?')
                {
                     ans = "NO";
                     break;
                }
            else
               {
                  ans = "YES";
                  l++,r--;
               } 
        }
        cout << ans << endl;
        
    }
    
    return 0;
}