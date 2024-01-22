#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	int n;
	char k;
	cin >> n >> k;
	int count = 0;
	while (n--)
	{
		bool exist = true;
		cin >> s;
		for (char i = '0'; i <= k; i++)
		{
			if (s.find(i) == -1) 
			{
				exist = false;
				break;
			}
		}
		if (exist)
		{
			count++;
		}
	}
	cout << count;
}


