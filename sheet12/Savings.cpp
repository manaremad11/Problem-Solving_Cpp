#include <iostream>
using namespace std;

int n;
int sum = 0;
int day(int d)
{
	if (sum >= n)
		return d;
	sum += (d + 1);
	return day(d + 1);
}
int main()
{
	cin >> n;
	cout << day(0);
	return 0;
}
