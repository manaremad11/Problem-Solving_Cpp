#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s, ans;
        cin >> s;
        ans += s.substr(0, 2);
        for (int i = 3; i < s.length(); i += 2)
        {
            ans += s[i];
        }
        cout << ans << endl;
    }
      return 0;}

