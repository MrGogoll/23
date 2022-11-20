#include <string>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	string s;
	int n;
	int maxL = 0;
	string masS;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		int c = s.size();
		if (c > maxL) {
			maxL = c;
			masS = s;
		}
	}
	cout << masS;



}

