#include <iostream>
using namespace std;

int main()
{
    int n, x=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a, b, c;
        cin>>a >> b >>c;
        if(a+b+c>=2)
            x++;
    }
    cout<<x;
    return 0;
}
