#include <iostream>
#include<string>
#include<map>
using namespace std;


int main()
{
	map<string, int>m;
	int cnt = 0;
	string s;
	cin >> s;
	for (int i = 1; i < s.length(); i++)
	{
		for (int j = 0; j < s.length(); j++)
		{
			string g = s.substr(j, i);
			m[g]++;
			if (m[g] > 1)
			{
				if (g.size() > cnt)
				{
					cnt = g.size();
				}
			}
		}
		m.clear();
	}
	cout << cnt;
	return 0;
}
