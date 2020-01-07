#include <bits/stdc++.h>

using namespace std;

int possDecs(string msg)
{
    int msgSize = msg.length()+1;
    int p[msgSize];

    p[0] = 1;
    p[1] = 1;
    for(int i = 2; i<msgSize; i++)
    {
        if(msg[i-1] == '0')
            p[i] = p[i-2];
        else if(msg[i-2]>'0'&& (msg[i-2]-48)*10+(msg[i-1]-48)<=26)
            p[i] = p[i-1] + p[i-2];
        else
            p[i] = p[i-1];
    }

    return p[msgSize-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    string msg;

    while(cin >> msg && msg[0] != '0')
    {
        cout << possDecs(msg) << endl;
    }

    return 0;
}
