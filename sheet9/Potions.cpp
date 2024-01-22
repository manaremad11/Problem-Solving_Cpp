#include <iostream>
#include <queue>
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
	IO
	long long n, x;
	cin >> n;
	priority_queue <long long, vector<long long>, greater < long long >> q;
	long long sum = 0, cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		sum += x;
		q.push(x);
		while (sum < 0)
		{
			sum += (-q.top());
			q.pop(); 
			cnt++;
		}
	}
	cout << n - cnt << "\n";
	return 0;
}

