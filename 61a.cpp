#include<iostream>
#include<string>
using namespace std;
int main()
{
    string st1,st2;
    cin >> st1 >> st2;
    for(int i=0;i<st1.length();i++)
    {
        if(st1[i]==st2[i])
            st1[i]='0';
        else
            st1[i]='1';
    }
    cout << st1 << endl;


}
