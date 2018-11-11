#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a;
    cin >> a;
    string key,typed;
    key="qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> typed;
    if(a=='R')
    {
        for(int i=0; i<typed.size(); i++)
        {
            for(int j=0; j<key.size(); j++)
            {
                if(typed[i]==key[j])
                {
                    cout << key[j-1];
                }
            }
        }
    }
    else
        for(int i=0; i<typed.size(); i++)
        {
            for(int j=0; j<key.size(); j++)
            {
                if(typed[i]==key[j])
                {
                    cout << key[j+1];
                }
            }
        }


}
