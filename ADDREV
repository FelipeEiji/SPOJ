#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, a, b, c, d;

    cin >> N;

    while(N--)
    {
        c = d = 0;
        cin >> a >> b;
        while(a > 0)
        {
            c = (c*10) + a%10;
            a /= 10;
        }
        while(b > 0)
        {
            d = (d*10) + b%10;
            b /= 10;
        }
        a = c+d;
        while(a > 0)
        {
            b = (b*10) + a%10;
            a /= 10;
        }
        cout << b << endl;
    }

    return 0;
}
