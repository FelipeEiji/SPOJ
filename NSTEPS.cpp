#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, x, y;
    cin >> T;

    while(T--)
    {
        cin >> x >> y;

        if(x == y)
        {
            if(x&1)
                cout << x+y-1 << endl;
            else
                cout << x+y << endl;
        }
        else if(x == y+2)
        {
            if(x&1)
                cout << x+y-1 << endl;
            else
                cout << x+y << endl;
        }
        else
            cout << "No Number" << endl;
    }
    return 0;
}
