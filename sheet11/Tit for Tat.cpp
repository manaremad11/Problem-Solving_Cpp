#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int t, n, i, k, a[10005];
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (i = 0; i < n; i++)
			cin >> a[i];
		i = 0;
		while (k > 0 && i < (n - 1))
		{
			if (a[i] > 0)
			{
				a[i]--;
				a[n - 1]++;
				k--;
			}
			else
				i++;
		}
		for (i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}

