#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	string s;
	getline(cin, s);
	while (tc--)
	{
		getline(cin, s);
		stack<char>c;
		bool ok = true;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(' || s[i] == '[')
			{
				c.push(s[i]);
			}
			else
			{
				if (c.empty())
				{
					ok = false;
					break;
				}
				if (c.top() == '(' && s[i] == ')' || c.top() == '[' && s[i] == ']')
				{
					c.pop();
				}
				else
				{
					ok = false;
					break;
				}
			}
		}
		if (c.size() != 0)
		{
			ok = false;
		}
		if (ok)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}


