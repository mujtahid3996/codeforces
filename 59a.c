#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int cou=0;
    for(int i=0;i<a.length();i++)
    {
        if(a.at(i)==toupper(a.at(i)))
            cou++;
    }
    if(cou>(a.length()/2))
    {
        for(int i=0;i<a.length();i++)
            a.at(i)=toupper(a.at(i));
    }
    else
        for(int i=0;i<a.length();i++)
            a.at(i)=tolower(a.at(i));

    cout << a;
    return 0;
}
