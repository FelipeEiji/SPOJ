#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
#define TRvii(c,it) \
 for(vii::iterator it = (c).begin(); it != (c).end(); it++)

int dfs_num[10001];
vector<vii> AdjList;

void dfs(int u)
{
	TRvii(AdjList[u], v)
	{
		if(dfs_num[v->first] == -1)
		{
			dfs_num[v->first] = u;
			dfs(v->first);
		}
		else if(dfs_num[v->first] != -1 && dfs_num[v->first] != dfs_num[u])
		{
			dfs_num[v->first] = -2;
		}
	}
}

int main(int argc, char** argv) {
	
	int N,M,beg,end;
	memset(dfs_num, -1, sizeof(dfs_num));
	
	cin >> N >> M;
	
	for(int i = 0; i<=N; i++)
	{
		vii temp;
		AdjList.push_back(temp);
	}
	
	while(M--)
	{
		cin >> beg >> end;
		AdjList[beg].push_back(make_pair(end,0));
	}
	
	dfs_num[1] = 1; //The first node of the DFS is visited;
	
	dfs(1);
	
	bool isItTree = true;
	
	for(int i = 1; i<=N;i++)
	{
		if(dfs_num[i] == -2 || dfs_num[i] == -1 )
		{
			isItTree = false;
			break;
		}
	}
	
	if(isItTree)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
	return 0;
}pt07y
