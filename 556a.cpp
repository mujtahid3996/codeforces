#include<iostream>
#include<string>
using namespace std;
int main()
{
    int c1=0,c2=0,rm,n;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            ++c1;
        else
            ++c2;

    }
    rm=n-2*min(c1,c2);
    cout << rm;
}
