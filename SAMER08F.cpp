#include <bits/stdc++.h>

using namespace std;

int squares(int N)
{
    if(N == 1)
        return 1;
    else
        return N*N + squares(N-1);
}

int main()
{
    int N;

    while(cin >> N && N != 0)
    {
        cout << squares(N) << endl;
    }
    return 0;
}
