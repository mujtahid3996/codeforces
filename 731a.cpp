#include<bits/stdc++.h>
using namespace std;
int main()
{
    char z='a';
    int i,mn=0,a,b,c;
    string s;
    cin >> s;
    for(int i=0;s[i];i++)
    {
        a=abs(s[i]-z);

        b=abs(s[i]-(26+z));


        c=abs(s[i]+26-z);

        z=s[i];
        mn+=min(c,min(a,b));
    }
    cout << mn;

}
