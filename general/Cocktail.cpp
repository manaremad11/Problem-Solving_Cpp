#include <iostream>
using namespace std;

int main()
{
	int m;
	double x, sum = 0.0;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		sum += x;
	}
	cout << sum / m;
}
