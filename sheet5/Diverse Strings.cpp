#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        sort(s.begin(), s.end());
        bool ans = true;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1] + 1)
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << "Yes \n";
        }
        else
        {
            cout << "No \n";
        }
    }
    return 0;
}

