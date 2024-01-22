#include <vector>
#include <iostream>
using namespace std;
int main() {

    vector<int> pos;
    vector<int>neg;
    vector<int>zero;

    int n, x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x < 0)      neg.push_back(x);
        else if (x > 0) pos.push_back(x);
        else            zero.push_back(x);
    }


    if (pos.size() == 0) {

        pos.push_back(neg.back());
        neg.pop_back();

        pos.push_back(neg.back());
        neg.pop_back();
    }

    if (neg.size() % 2 == 0) {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size() << " ";
    for (int val : neg)cout << val << " ";
    cout << "\n";


    cout << pos.size() << " ";
    for (int val : pos)cout << val << " ";
    cout << "\n";


    cout << zero.size() << " ";
    for (int val : zero)cout << val << " ";
    cout << "\n";





    return 0;
}
