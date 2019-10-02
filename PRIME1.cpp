#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

vector<lli> primes;

void sieve(lli n)
{
    bool sieve[n+1];
    memset(sieve, true, n+1);

    sieve[0] = false;
    sieve[1] = false;
    for(int i = 2; i<=n;i++)
    {
        if(sieve[i])
        {
            primes.push_back(i);
            for(int j = i; j<= n; j+= i)
                sieve[j] = false;
        }
    }
}

void primesBetween(lli m, lli n)
{
    lli limit = floor(sqrt(n)) + 1;
    sieve(limit);

    lli mandn = n - m + 1;

    bool mn[mandn+1];
    memset(mn, true, mandn+1);

    for(int i = 0; i<primes.size(); i++)
    {
        lli start = floor(m/primes[i])*primes[i];
        if(start < m)
            start += primes[i];
        if(start == primes[i])
            start += primes[i];

        for(lli j = start; j<=n; j+= primes[i])
            mn[j-m] = false;
    }

    for(lli i = m; i<=n;i++){
        if(mn[i-m] && i != 1)
            cout << i << endl;
    }
}

int main()
{
    int t;
    lli m, n;

    cin >> t;
    while(t--)
    {
        cin >> m >> n;

        primesBetween(m, n);
        primes.clear();
        if(t != 0)
            cout << endl;
    }

    return 0;
}
