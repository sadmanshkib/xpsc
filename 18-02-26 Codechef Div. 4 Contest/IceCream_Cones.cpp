#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        	int x,y,n;
	cin >> x >> y >> n;
	int left = x - (y*n);
	if(left > 0)
	{
	    cout << left << endl;
	}
	else
	{
	    cout << "0" << endl;
	}
    }
    
    return 0;
}