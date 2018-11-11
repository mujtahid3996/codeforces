#include<iostream>
using namespace std;
int main()
{
    int n,k,t,cou=0;
    cin >> n>>k;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        if(5-t>=k)
            cou++;
    }
    cout << cou/3;
}
