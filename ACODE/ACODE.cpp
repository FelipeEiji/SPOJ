#include <bits/stdc++.h>

using namespace std;

map<string, int> memoization;

int possDecs(string msg)
{
    if(memoization.count(msg)>0) return memoization[msg];
    int result = possDecs(msg.substr(1,msg.length()-1));
    memoization[msg.substr(1,msg.length()-1)] = result;
    if(msg[1] == '0') memoization[msg.substr(1)] = 0;
    if(msg[0] == '0') memoization[msg] = 0;
    if(msg.length() > 2 && msg[0] == '1')
        return memoization[msg.substr(1,msg.length()-1)] + memoization[msg.substr(2,msg.length()-2)];
    else if(msg.length() > 2 && msg[0] == '2' && msg[1] <= '6')
        return memoization[msg.substr(1,msg.length()-1)] + memoization[msg.substr(2,msg.length()-2)];
    else if(msg.length() > 1)
        return memoization[msg.substr(1,msg.length()-1)];
}

int main()
{
    ios_base::sync_with_stdio(false);
    string msg;

    memoization["a"] = 1;
    memoization["0"] = 0;
    while(cin >> msg && msg[0] != '0')
    {
        msg += "a";
        cout << possDecs(msg) << endl;
    }

    return 0;
}
