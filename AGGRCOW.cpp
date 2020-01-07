#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

bool placingCows(ll mid, ll *stalls, int cows, int N)
{
    ll ocuppied = 1, lastposition = stalls[0];
    for(int i = 1; i<N; i++)
    {
        if(stalls[i]-lastposition >=mid)
        {
            if(++ocuppied == cows) return true;
            lastposition = stalls[i];
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int N, C, t;
    ll first, last, mid;


    cin >> t;

    while(t--)
    {
        cin >> N >> C;
        ll stalls[N];
        for(int i = 0; i<N; i++)
        {
            cin >> stalls[i];
        }
        sort(stalls, stalls+N);
        first = 0, last = stalls[N-1]-stalls[0]+1;
        while(last - first>1)
        {
            mid = (last + first) >> 1;
            (placingCows(mid, stalls, C, N)?first:last) = mid;
        }

        cout << first << endl;
    }

    return 0;
}
