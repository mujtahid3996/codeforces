#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cin >> a[i];
        sum=sum+a[i];

    }
    if(sum==0)
        cout << -1<<endl;
    else if(sum%5==0)
        cout << sum/5 <<endl;
    else
        cout << -1 <<endl;
}
