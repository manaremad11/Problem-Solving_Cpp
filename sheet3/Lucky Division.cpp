#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; ++i)
    {
        if(n%i==0)
        {
            int val=i;
            bool ok = true;
            while(val>0)
            {
                if(val%10!=4 && val%10!=7)
                {
                    ok = false;
                    break;
                }
                val/=10;
            }
            if(ok == true)
            {
                cout<<"YES \n";
                return 0;
            }
        }
    }
    cout<<"NO \n";
    
    return 0;
}
