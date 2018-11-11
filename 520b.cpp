#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,noc=0;
    cin >> n>>m;
    if(m<n)
        {
            cout << n-m;
            return 0;
        }
    while(n<m)
    {
        if(m%2==0)
        {
            m=m/2;
        }
        else
            m++;
        noc++;
    }
    cout << abs(noc+n-m);N

}
