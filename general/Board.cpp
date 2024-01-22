#include <iostream>
#include<map>
using namespace std;


int main()
{
	int n, m, p;
	cin >> n >> m >> p;
	cout << (n - m + 1) * (n - p + 1);
	return 0;
}
