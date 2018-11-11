
#include<iostream>
using namespace std;
int main()
{
    int n,cou=0,l,h;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    l=a[0];
    h=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<l)
        {
            l=a[i];
            cou++;
        }
        if(a[i]>h)
        {
            h=a[i];
            cou++;
        }
    }
    cout<<cou;
}
