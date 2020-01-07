#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    int T, N;
    ll candies, aux;

    cin >> T;
    for(int i = 0; i<T; i++)
    {
        cin >> N;
        candies = 0;
        for(int j = 0; j<N; j++)
        {
            cin >> aux;
            candies += aux;
            candies %= N;
        }
        if(candies == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
