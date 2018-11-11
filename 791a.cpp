#include<iostream>
using namespace std;
int main()
{
    int a,b,cou=0;
    cin >> a >> b;
    while(a<=b)
    {
        cou+=1;
        a=a*3;
        b=b*2;
    }
    cout << cou;
}
