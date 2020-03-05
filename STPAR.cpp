#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	
	stack<int> sideStreet;
	int mainStreet[1001];
	int trucks, organized, order;
	bool possible;
	
	while(cin >> trucks && trucks != 0)
	{
		possible = true;
		organized = 1;
		order = 0;
		sideStreet.push(0);
		for(int i = 0; i< trucks; i++)
		{
			cin >> mainStreet[i];
		}

		while(organized != trucks)
		{
			if(mainStreet[order] == organized)
			{
				organized ++;
				order++;
			}
			else if(sideStreet.top() == organized)
			{
				sideStreet.pop();
				organized++;
			}
			else if (order != trucks)
			{
				sideStreet.push(mainStreet[order]);
				order++;
			}
			else
			{
				possible = false;
				break;
			}
		}
		if(possible)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		while(!sideStreet.empty())
			sideStreet.pop();
	}
	
	return 0;
}
