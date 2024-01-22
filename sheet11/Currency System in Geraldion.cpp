#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main()
{
	int n, x;
	cin >> n;
	set<int>st;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		st.insert(x);
	}
	auto it = st.begin();
	if (*it == 1)
	{
		cout << -1 << "\n";
	}
	else
	{
		cout << 1 << "\n";
	}
	return 0;
}
