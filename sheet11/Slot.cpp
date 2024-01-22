#include <iostream>
#include <set>
using namespace std;

int main()
{
	set <char>s;
	for (int i = 0; i < 3; i++)
	{
		char a;
		cin >> a;
		s.insert(a);
	}
	if (s.size() == 1)
	{
		cout << "Won\n";
	}
	else
		cout << "Lost\n";
	return 0;
}
