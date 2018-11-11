#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n>>k;
    int p=240-k;
    for(int i=1;i<=n;i++)
    {
        if(p-5*i>0)
            p=p-5*i;
        else if(p-5*i==0)
        {
            cout << i ;
            break;
        }
        else if( p-5*i <0)
        {
            cout << --i;
            break;
        }
        if(i==n)
            cout << i;
    }
}
