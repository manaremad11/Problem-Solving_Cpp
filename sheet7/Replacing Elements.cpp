#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a[105];

int main()
{
	int t = 0;
	cin >> t; 
	int n, d;
	while (t--)
	{
		cin >> n >> d;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = n - 1; i > 0; i++)
		{
			if (a[i] > d)
			{
				if (a[0] + a[1] <= d)
				{
					a[i] = a[0] + a[1];
				}
				else
				{
					cout << "NO \n";
					break;
				}
			}
			else
			{
				cout << "YES \n";
				break;
			}
		}
	}
	return 0;
}
