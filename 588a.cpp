#include<iostream>
using namespace std;
int main()
{
    int n,a,p,price=101,money=0;
    cin >> n;
    while(n--)
    {
        cin >> a>>p;
        if(price>p)
        {
            price=p;
        }
        money+=a*price;
    }
    cout << money;
}
