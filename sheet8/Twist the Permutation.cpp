#include <iostream>
#include <deque>
#include <vector>
using namespace std;


int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int>v(n + 1), mx(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            mx[i] = max(mx[i - 1], v[i]);
        }
        vector<int>ans;
        for (int i = n; i >= 1; i--)
        {
            ans.push_back(v[i]);
            if (mx[i] == v[i])
            {
                while (!ans.empty())
                {
                    cout << ans.back() << " ";
                    ans.pop_back();
                }
            }
        }
        cout << endl;
    }
}

