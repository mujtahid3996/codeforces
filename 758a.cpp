#include<iostream>
using namespace std;
int main()
{
    int n,l=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
            cin>> a[i];
            if(a[i]>l)
                l=a[i];
        }
        int coun=0;
        for(int i=0;i<n;i++)
        {
            coun=coun+l-a[i];
        }
        cout << coun;
}
