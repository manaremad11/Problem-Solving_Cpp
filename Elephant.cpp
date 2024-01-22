#include <iostream>
using namespace std;

int main()
{
    int x;
    int result=0;
    cin >> x;
    result+=(x/5);
    x%=5;
    result+=(x/4);
    x%=4;
    result+=(x/3);
    x%=3;
    result+=(x/2);
    x%=2;
    result+=(x/1);
    x%=1;
    cout<<result;
    
    return 0;
}
