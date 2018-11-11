#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if(a>=0)
        cout << a;
    else
    {
        int n=a/10;
        int l=a/100*10+a%10;
        cout << max(n,l);
    }
}
