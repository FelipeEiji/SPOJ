#include <bits/stdc++.h>

using namespace std;

int compare(const void *a, const void *b)
{
    if ( *(int*)a <  *(int*)b ) return -1;
    if ( *(int*)a == *(int*)b ) return 0;
    if ( *(int*)a >  *(int*)b ) return 1;
}

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
        qsort(men, N, sizeof(int), compare);
        qsort(women, N, sizeof(int), compare);

        for(int i = 0; i<N; i++)
        {
            maxhotness += (men[i]*women[i]);
        }

        cout << maxhotness << endl;
    }

    return 0;
}
