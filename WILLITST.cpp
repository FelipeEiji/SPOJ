#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	unsigned long long int n;
	
	cin >> n;
	if((n & (n-1)) == 0)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;

	return 0;
}
