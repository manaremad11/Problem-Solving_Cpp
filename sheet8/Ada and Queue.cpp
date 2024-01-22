#include <iostream>
#include <deque>
using namespace std;


int main()
{
    deque<int>d;
    int t;
    cin >> t;
    bool rev = 0;
    while (t--)
    {
        string s;
        int n;
        cin >> s;
        if (s == "push_back")
        {
            cin >> n;
            if (rev == 0)
                d.push_back(n);
            else
                d.push_front(n);

        }
        else if (s == "toFront")
        {
            cin >> n;
            if (rev == 1)
                d.push_back(n);
            else
                d.push_front(n);
        }
        else if (s == "reverse")
        {
            rev = (!rev);
        }
        else
        {
            if (d.empty() == true)
                cout << "No job for Ada? \n";
            else
            {
                if (s == "back")
                {
                    if (rev == 0)
                    {
                        cout << d.back() << "\n";
                        d.pop_back();
                    }
                    else
                    {
                        cout << d.front() << "\n";
                        d.pop_front();
                    }
                }
                else
                {
                    if (rev == 1)
                    {
                        cout << d.back() << "\n";
                        d.pop_back();
                    }
                    else
                    {
                        cout << d.front() << "\n";
                        d.pop_front();
                    }
                }
            }
        }
    }
    return 0;
}

