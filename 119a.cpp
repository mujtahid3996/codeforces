#include<iostream>
using namespace std;
int gcd(int n,int m)
{
    int gcd;
    for(int i=1;i<=n && i<=m;++i)
    {
        if(n%i==0 && m%i==0)
            gcd=i;
    }
    return gcd;
}
int main()
{
    int a,b,n,flag=0;
    cin >> a >>b >>n;
    while(n!=0)
    {
        if(flag==0)
        {
            n=n-gcd(a,n);
            flag=1;
        }
        else if(flag==1)
        {
            n=n-gcd(b,n);
            flag=0;
        }

    }
    if(flag==1)
        cout << 0;
    else
        cout << 1;

}
