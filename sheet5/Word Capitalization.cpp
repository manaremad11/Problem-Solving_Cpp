#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    s[0] = towupper(s[0]);
    cout << s;
    return 0;
}
