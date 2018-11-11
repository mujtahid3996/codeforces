#include<iostream>
using namespace std;
int main()
{
    int n,h,cou=0;
    cin >> n >> h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[n];
        if(a[n]>h)
            cou+=2;
        else
            cou+=1;
    }
    cout << cou;
}
