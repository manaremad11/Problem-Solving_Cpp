#include <iostream>
using namespace std;

const int N = 105;
int arr[N];
int n;
int f(int i)
{
	if (i == n)
		return 0;
	return arr[i] + f(i + 1);
}

int main()
{
	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		cout << "Case " << tc << ": " << f(0) << "\n";
	}
}
