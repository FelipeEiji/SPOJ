#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, counter, sortedpacket, moves;
    int packets[10001];

    while(cin >> N && N != -1)
    {
        counter = moves = 0;
        for(int i = 0; i<N; i++)
        {
            cin >> packets[i];
            counter += packets[i];
        }
        if(counter%N != 0)
            cout << -1 << endl;
        else
        {
            sortedpacket = counter / N;
            for(int i = 0; i<N; i++)
            {
                moves += abs(packets[i] - sortedpacket);
            }
            cout << moves/2 << endl;
        }
    }

    return 0;
}
