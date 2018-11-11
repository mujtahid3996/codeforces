#include<iostream>
using namespace std;
int main()
{
    int k2,k3,k5,k6;
    int cou256=0;
    int cou32=0;
    cin >> k2 >>k3 >>k5 >>k6;
    while(k2!=0&&k5!=0&&k6!=0)
    {
        k2--;
        k5--;
        k6--;
        cou256++;
    }
    while(k3!=0&&k2!=0)
    {
        k3--;
        k2--;
        cou32++;
    }
    int ans=0;
    while(cou256!=0)
    {
        ans+=256;
        cou256=cou256-1;
    }
    while(cou32!=0)
    {
        ans+=32;
        cou32=cou32-1;
    }
    cout << ans;
}
