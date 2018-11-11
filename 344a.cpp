#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int x,cou=1;
    cin>>x;
    char a[3],b[3];
    cin >> b;
    for(int i=1;i<x;i++)
    {
        cin >> a;
        if(strcmp(a,b)!=0)
            cou++;
        strcpy(b,a);
    }
    cout << cou;
}
