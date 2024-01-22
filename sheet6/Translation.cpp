#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int  n;
string s, r;

int main()
{
	cin >> s >> r;
	reverse(r.begin(), r.end());
	if (s == r)
	{
		cout << "YES \n";
	}
	else
	{
		cout << "NO \n";
	}
}
