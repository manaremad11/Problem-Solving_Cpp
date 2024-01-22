#include <iostream>
#include <queue>
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 2e9;

int main()
{
	IO
	int n, x;
	cin >> n;
	string typ;
	priority_queue <int, vector<int>, greater < int >> pq;
	vector<string>ans;
	vector<int>value;
	while (n--)
	{
		cin >> typ;
		if (typ == "insert")
		{
			cin >> x;
			pq.push(x);
			ans.push_back("insert");
			value.push_back(x);
		}
		else if (typ == "removeMin")
		{
			if (pq.empty())
			{
				pq.push(0);
				ans.push_back("insert");
				value.push_back(0);
			}
			ans.push_back("removeMin");
			value.push_back(N);
			pq.pop();
		}
		else
		{
			cin >> x;
			while (!pq.empty() && pq.top() < x)
			{
				ans.push_back("removeMin");
				value.push_back(N);
				pq.pop();
			}
			if (pq.empty() || pq.top() != x)
			{
				pq.push(x);
				ans.push_back("insert");
				value.push_back(x);
			}
			ans.push_back("getMin");
			value.push_back(x);
		}
	}
	cout << ans.size() << "\n";
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i];
		if (value[i] != N)
		{
			cout << " " << value[i];
		}
		cout << "\n";
	}

	return 0;
}

