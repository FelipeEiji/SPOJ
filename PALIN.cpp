#include <bits/stdc++.h>

using namespace std;

void copy(int size, string& pal)
{
	for(int i = 0; i<size/2;i++)
	{
		pal[size-1-i] = pal[i];
	}
}

int isBigger(string& pal, string& aux)
{
	if(pal.size() > aux.size())
		return 1;
	for(int i = 0; i<pal.size();i++)
	{
		if(pal[i] > aux[i])
			return 1;
		if(pal[i] < aux[i])
			return 0;
	}
	return 0;
}

void sumPal(string& pal)
{
	if(pal.size()&1)  //odd
	{
		for(int i = pal.size()/2 ; i > -1; i--)
		{
			if(pal[i] == '9')
				pal[i] = '0';
			else
			{
				pal[i] += 1;
				break;
			}
		}
		if(pal[0] == '0')
		{
			pal += '0';
			pal[0] = '1';
		}
	}
	else			  //even
	{
		for(int i = pal.size()/2-1 ; i > -1; i--)
		{
			if(pal[i] == '9')
				pal[i] = '0';
			else
			{
				pal[i] += 1;
				break;
			}
		}
		if(pal[0] == '0')
		{
			pal += '0';
			pal[pal.size()/2] = '0';
			pal[0] = '1';
		}
	}
}

int main(int argc, char** argv) {
	
	ios_base::sync_with_stdio(false);
	
	int K;
	string pal, aux;
	
	cin >> K;
	
	while(K)
	{
		cin >> pal;
		aux = pal;
		if(pal.size() == 1 && pal[0] != '9')
			cout << (char)(pal[0] + 1) << endl;
		else if(pal.size() == 1 && pal[0] == '9')
			cout << "11" << endl;
		else
		{
			copy(pal.size(),pal);
			if(isBigger(pal,aux))
				cout << pal << endl;
			else
			{
				sumPal(pal);
				copy(pal.size(),pal);
				cout << pal << endl;
			}
		}	
		K--;
	}
	return 0;
}
