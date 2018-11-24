#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool hard=false;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1)
        {
            hard=true;
            break;
        }
    }
    if(hard)
        cout << "HARD";
    else
        cout << "EASY";
}
