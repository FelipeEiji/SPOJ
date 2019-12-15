#include <bits/stdc++.h>

using namespace std;

map <int,unsigned int> coins;
int best_value;

unsigned int exchange(unsigned int value)
{
    if(value == 0) return 0;
    else if(coins.count(value))
        return coins[value];
    else
    {
        best_value = exchange(value/2) + exchange(value/3) + exchange(value/4);
        if(best_value > value)
        {
            coins[value] = best_value;
            return best_value;
        }
        else
        {
            coins[value] = value;
            return value;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    unsigned int n;

    while(cin >> n)
    {
        cout << exchange(n) << endl;
    }

    return 0;
}
