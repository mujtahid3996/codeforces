#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    set<char> myset;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=97 && s[i]<=122)
            myset.insert(s[i]);
    }
    cout << myset.size();
}
