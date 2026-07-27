// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n,k;
//         cin >> n >> k;
//         // cout << k << endl;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         sort(a,a+n);
//         int total = 0;
        
//         int s1mn = INT_MAX,s1mx = INT_MIN,s2mn = INT_MAX,s2mx = INT_MIN;

//         if(k==1)
//             {
//                 total += 2*a[n-1];
//                 total += a[0];
//                 total += a[n-2];
                
//             }
//         else
//             {
//                 total += a[0];
//                 total += a[n-1];
//                 total += a[n-2];
//                 total += a[n-k-1];

//             }
//             // cout << k << endl;
//             // cout << s1mn << s1mx << s2mn << s2mx << endl;

        
//         cout << total << endl;
        
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        // cout << k << endl;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        int total = 0;
        
        int s1mn = INT_MAX,s1mx = INT_MIN,s2mn = INT_MAX,s2mx = INT_MIN;

        if(k==1)
            {
                total += 2*a[n-1];
                total += a[0];
                total += a[n-2];
                
            }
        else
            {
                total += a[0];
                total += a[n-1];
                total += a[n-2];
                total += a[n-k-1];

            }
            // cout << k << endl;
            // cout << s1mn << s1mx << s2mn << s2mx << endl;

        
        cout << total << endl;
        
    }
    
    return 0;
}