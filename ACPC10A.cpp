#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, a3;

    while(cin >> a1 >> a2 >> a3 && (a1 != a2 &&  a2 != a3 && a3 != 0))
    {
        if(a2 - a1 == a3 - a2)
            cout << "AP " << a3 + (a2 - a1) << endl;
        else
            cout << "GP " << a3 * (a2/a1) << endl;

    }
    return 0;
}
