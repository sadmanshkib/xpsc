#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    for(auto x : dq)
    {
        cout << x << " ";
    }
    cout << "\n";

    dq.push_back(9);
    dq.push_front(66);

     for(auto x : dq)
    {
        cout << x << " ";
    }
    cout << "\n";

    dq.pop_back();
    dq.pop_front();

     for(auto x : dq)
    {
        cout << x << " ";
    }
    cout << "\n";

    cout << dq.front() << " " << dq.back() << endl;

    sort(dq.begin(),dq.end());
     for(auto x : dq)
    {
        cout << x << " ";
    }
    cout << "\n";

    reverse(dq.begin(),dq.end());
     for(auto x : dq)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}