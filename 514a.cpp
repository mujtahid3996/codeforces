#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[20];
    cin >>  s;
    if(s[0]>52 && s[0]!=57)
        s[0]=57-s[0]+48;
    for(int i=1;i<strlen(s);i++)
    {
        if(s[i]>52)
            s[i]=57-s[i]+48;
    }
    cout << s ;

}
