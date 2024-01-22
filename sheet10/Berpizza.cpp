#include <iostream>
#include <set>
#include <map>
using namespace std;


int main() {
	int q;
	cin >> q;
	set <pair<int, int>>st;  //val,idx
	map<int, int>mp;
	set<int>d;
	int cur = 1;
	while (q--)
	{
		int t;
		cin >> t;
		if (t == 1)
		{
			int m;
			cin >> m;
			st.insert({ m,-cur });
			d.insert(cur);
			mp[cur++] = m;
		}
		else if (t == 2)
		{
			auto it = *d.begin();
			d.erase(d.begin());
			int amount = mp[it];
			cout << it << " ";
			st.erase({ amount,-it });
		}
		else
		{
			auto it = *st.rbegin();
			st.erase(it);
			d.erase(-it.second);
			cout << -it.second << " ";
		}
	}
	return 0;
}
