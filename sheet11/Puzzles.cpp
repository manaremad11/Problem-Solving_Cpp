#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n, m, a[1005];
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	sort(a, a + m);
	int least = a[n - 1] - a[0];
	for (int i = 1; i <= m - n; i++)
	{
		if (a[i + n - 1] - a[i] < least)
			least = a[i + n - 1] - a[i];
	}
	cout << least << "\n";
	return 0;
}

