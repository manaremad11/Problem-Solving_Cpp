#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == tolower(s[j]))
            {
                ans++;
                break;
            }
        }
    }
    if (ans == 26)
    {
        cout << "YES \n";
    }
    else
    {
        cout << "NO \n";
    }
    return 0;
}

