#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	
	double c, dist, cards;
	
	while(cin >> c && c != 0)
	{
		cards = 1;
		dist = 0.5;
		while(true)
		{
			if(c <= dist) break;
			else
			{
				cards++;
				dist += (1/(cards+1));
			}
		}
		cout << cards << " card(s)" << endl;
	}
	return 0;
}
