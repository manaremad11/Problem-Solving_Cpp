#include <iostream>
using namespace std;

int n, x;
int a[100009];
void remove(int i)
{
	if (i == n)
		return;
	if (a[i] != x)
		cout << a[i] << " ";
	remove(i + 1);
}
int main()
{
	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	remove(0);
	return 0;
}
