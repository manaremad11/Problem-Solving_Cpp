#include <iostream>
using namespace std;

int main()
{
    int n,k,l;
    cin>>n>>k;
    for( int i=1; i<=k; i++)
    {
        l=n%10;
        if(l==0)
           n/=10;
        else
           n-=1;
    }
    cout<<n;
    return 0;
}
