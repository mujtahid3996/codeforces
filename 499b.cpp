#include<iostream>
#include<map>
using namespace std;
int main()
{
    string a,b,p;
    int n,m;
    cin >> n>> m;
    map<string,string> dict;
    for(int i=0;i<m;i++)
    {
        cin >> a>>b;
        if(b.length()<a.length())
            dict[a]=b;
        else
            dict[a]=a;

    }
    for(int i=0;i<n;i++)
    {
        cin >> p;
        cout << dict[p] <<" ";
        p.clear();
    }
}
