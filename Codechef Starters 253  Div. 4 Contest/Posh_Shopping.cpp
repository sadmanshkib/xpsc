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

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;

        // for (int i = 0; i < n; i++)
        // {
        //     ans = max(ans, a[i]);
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (a[i] <= a[j])
        //         {
        //             ans = max(ans, a[i] + a[j]);
        //         }
        //     }
        // }

        int mx =0;
        for (int i = n-1; i >= 0; i--)
        {
            if(a[i] <= mx)
                ans = max(ans,a[i]+mx);
            else
                ans = max(ans,a[i]);
            mx = max(mx,a[i]);
        }
        

        cout << ans << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int a[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int ans = 0;

//         for (int i = 0; i < n; i++)
//         {
//             ans = max(ans, a[i]);

//             for (int j = i + 1; j < n; j++)
//             {
//                 if (a[i] <= a[j])
//                 {
//                     // cout << ans << a[i] << a[j] << endl;
//                     ans = max(ans, a[i] + a[j]);
//                 }
//             }
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }