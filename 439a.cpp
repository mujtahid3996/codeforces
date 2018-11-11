#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin >> n >>d;
    int sum=0,t;
    for(int i=0;i<n;i++)
    {
        cin >> t;
        sum+=t;
    }
    if(d<(sum+(n-1)*10))
        cout << -1;
    else
        cout << (d-sum)/5;
}
