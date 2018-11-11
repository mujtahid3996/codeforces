#include<iostream>
using namespace std;
int main()
{
    int n,x,cou=0;
    cin >> n >> x;
    if(x<=n)
        cou++;
    for(int i=2;i<=n;i++)
    {
        if(x%i==0 && x/i<=n)
            cou++;

    }
    cout << cou ;
}
