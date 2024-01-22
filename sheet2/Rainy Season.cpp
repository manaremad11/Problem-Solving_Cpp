#include <iostream>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int count = 0;
     if(s[0] == 'R' && s[1] == 'S')
        cout << 1 ;
    else
    {
        if(s[0] == 'R')
            count++;
        if(s[1] == 'R')
            count++;
        if(s[2] == 'R')
            count++;
        cout << count ;
    }
    return 0;
}
