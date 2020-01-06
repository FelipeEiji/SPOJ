#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    string msg;

    while(cin >> n && n != 0)
    {
        cin >> msg;
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < msg.length()/n; j++)
            {
                if(j & 1)
                    cout << msg[n-i-1+n*j];
                else
                    cout << msg[i+n*j];
            }
        }
        cout << endl;
    }

    return 0;
}
