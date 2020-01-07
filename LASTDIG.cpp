#include <bits/stdc++.h>

using namespace std;

int modPow(int a, int b, int mod)
{
    int result = 1;

    a = a % mod;

    while(b>0)
    {
        if(b&1)
            result = (result * a) % mod;

        b = b>>1;
        a = (a*a) % mod;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int a, b, t;

    cin >> t;

    while(t--)
    {
        cin >> a >> b;
        cout << modPow(a,b,10) << endl;
    }

    return 0;
}
