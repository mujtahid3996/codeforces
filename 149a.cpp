#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,cou=0,total=0;
    int a[12];
    cin >> k;
    for(int i=0;i<12;i++)
    {
        cin >> a[i];
    }
    sort(a,a+12);
    int i=11;
    while(i>=0)
    {
        if(total>=k)
            break;
        total+=a[i];
        cou++;
        i--;
    }
    if(total>=k)
        cout << cou;
    else
        cout << -1;
}
