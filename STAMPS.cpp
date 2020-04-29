#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	
	ios::sync_with_stdio(false);
	
	int neededStamps, friends, scenarios, totalStamps, borrowed;
	int friendsStamps[1001];
	
	cin >> scenarios;
	
	for(int i = 1;i<=scenarios;i++)
	{
		totalStamps = borrowed = 0;
		cin >> neededStamps >> friends;
		for(int j = 0; j<friends; j++)
		{
			cin >> friendsStamps[j];
			totalStamps += friendsStamps[j];
		}
		
		if(neededStamps > totalStamps)
			cout << "Scenario #" << i << ':' << endl << "impossible" << endl;
		else
		{
			sort(friendsStamps,friendsStamps+friends, greater<int>());
			for(int j = 0;j<friends;j++)
			{
				borrowed += friendsStamps[j];
				if(borrowed >= neededStamps)
				{
					cout << "Scenario #" << i << ':' << endl << j+1 << endl;
					break;
				}
			}
		}
		
	}
	
	return 0;
}
