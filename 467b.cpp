#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    cin >> n >>  m >> k;
    int a[m+1];
    int t=0,friends=0;
    for(int i=0; i<m+1; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
    {
        t=0;
        for(int j=0; j<n; j++)
        {
            if(((a[i]>>j)&1)!=((a[m]>>j)&1))
                t++;
        }
        if(t<=k)
            friends++;
    }
    cout << friends <<endl;

}
