#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    double n;
    int rectangles = 0;

    cin >> n;

    for(int i = 1 ; i<=floor(sqrt(n));i++)
    {
        rectangles += (n/i - i + 1);
    }
    cout << rectangles;

    return 0;
}
