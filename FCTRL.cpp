#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, n0;
    cin >> T;
    while(T--)
        {
            cin >> N;
            n0 = 0;
            for(int i = 5; N/i >= 1; i*=5)
            {
                n0 += floor(N/i);
            }
            cout << n0 << endl;
        }

    return 0;
}
