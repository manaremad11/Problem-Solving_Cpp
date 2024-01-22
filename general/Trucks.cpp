#include <iostream>
#include<vector>
using namespace std;

int n, t;
int solve(int sum)
{
	if (sum <= t)
		return 1;
	else
		return solve(sum / 2) + solve(sum / 2 + (sum % 2 ? 1 : 0));
}
int main()
{
	while (cin >> n)
	{
		cin >> t;
		cout << solve(n) << "\n";
	}
	return 0;
}
