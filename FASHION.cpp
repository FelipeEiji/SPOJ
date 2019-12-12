#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, N, maxhotness;
    int men[1001], women[1001];

    cin >> t;

    while(t--)
    {
        maxhotness = 0;
        cin >> N;
        for(int i = 0; i<N; i++)
        {
            cin >> men[i];
        }
        for(int i = 0; i<N; i++)
        {
            cin >> women[i];
        }
        sort(men, men+N);
        sort(women, women+N);

        for(int i = 0; i<N; i++)
        {
            maxhotness += (men[i]*women[i]);
        }

        cout << maxhotness << endl;
    }

    return 0;
}
