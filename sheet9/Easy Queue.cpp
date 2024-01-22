#include <iostream>
#include <queue>
#define IO ios_base :: sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
	IO
		int n, x;
	cin >> n;
	queue <int> q;
	while (n--)
	{
		cin >> x;
		if (x == 1)
		{
			int y;
			cin >> y;
			q.push(y);
		}
		else if (x == 2 && !q.empty())
		{
			q.pop();
		}
		else if (x == 3)
		{
			if (q.empty())
			{
				cout << "Empty! \n";
			}
			else
			{
				cout << q.front() << "\n";
			}
		}
	}
}

