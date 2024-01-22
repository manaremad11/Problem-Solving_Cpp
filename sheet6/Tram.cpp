#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int capacity = 0;      
	int curr = 0;         
	int a, b;          
	while (n--)
	{
		cin >> a >> b;
		curr = curr - a;
		curr = curr + b;
		if (curr > capacity)
		{
			capacity = curr;
		}
	}
	cout << capacity;
	return 0;
}

