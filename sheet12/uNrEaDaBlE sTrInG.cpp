#include <iostream>
#include <string>
using namespace std;

void word(string s, int a)
{
    if (a % 2 == 0 && isupper(s[a]))
    {
        cout << "No";
        return;
    }
    else if (a % 2 != 0 && islower(s[a]))
    {
        cout << "No";
        return;
    }
    if (a == s.length())
    {
        cout << "Yes";
        return;
    }
    word(s, a + 1);
}
int main() 
{
    string s;
    cin >> s;
    word(s, 0);
    return 0;
}
