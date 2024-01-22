#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	int n, d;
	cin >> n >> d;
	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		q.push(x);
	}
	for (int i = 0; i < d; i++)
	{
		int f = q.front();
		q.push(f);
		q.pop();
	}
	for (int i = 0; i < n; i++)
	{
		cout << q.front() << " ";
		q.pop();
	}
}

