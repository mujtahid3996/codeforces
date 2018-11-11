#include<iostream>
using namespace std;
int main()
{
    int a,b,cou=a;
    cin >> a >> b;
    int n=a/b;
    cou=a+n;
    for(;;)
    {
        if(n>=b)
            {
                cou=cou+n/b;
                n=n/b;
            }
        else
            break;
    }
    cout << cou;
}
