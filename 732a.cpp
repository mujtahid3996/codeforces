#include<iostream>
using namespace std;
int main()
{
    int r,k;
    cin >> k>>r;
    int tmp=k;
    while((k-r)%10!=0 && k%10!=0)
    {
        k+=tmp;
    }
    cout << k/tmp;

}
