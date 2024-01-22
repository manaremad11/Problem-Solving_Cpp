#include <iostream>
#include <set>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		set<int>s;
		int crash = 0, x;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			s.insert(x);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> x;
			if (s.find(x) != s.end())
				crash++;
		}
		cout << crash << "\n";
	}
}
