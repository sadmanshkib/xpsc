#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--)
	{
	    int x;
	    cin >> x;
	    int xmn = 999999,xmx = 0;
        for (int i = 0; i < x; i++)
        {
            int p;
            cin >> p;
            if(p> xmx)
                xmx = p;
            if(p< xmn)
                xmn = p; 
        }
        cout << xmx - xmn + 1 << endl;
	}

}
