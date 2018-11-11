#include<iostream>
using namespace std;
int main()
{
    int couo=0,coue=0;
    int n;
    cin >> n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
            coue++;
        else
            couo++;
    }
    if(coue>couo)
    {
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2!=0)
            {
                cout << i;
                break;
            }
        }
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2==0)
            {
                cout << i;
                break;
            }
        }
    }
}
