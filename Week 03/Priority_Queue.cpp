#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> p;
    p.push(5);
    p.push(4);
    p.push(6);
    p.push(4);
    p.push(1);
    p.push(5);

    // cout << p.top() << endl;
    p.pop();
    p.pop();
    cout << p.top() << endl;
    cout << p.empty() << endl; 
    cout << " size -> " << p.size() << endl;
    while (!p.empty())
    {
        cout << p.top() << endl;
        p.pop();
    }
    cout << p.empty() << endl;
    

    return 0;
}