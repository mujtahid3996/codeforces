#include<iostream>
using namespace std;
int main()
{
    int n;
    double f,sum=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin >> f;
        sum+=f;
    }
    cout << sum/n;

}
