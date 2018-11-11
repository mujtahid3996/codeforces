#include<iostream>
using namespace std;
int main()
{
    int n,c,cou=1;
    cin >> n>>c;
    int prev,cur;
    cin >> prev;
    for(int i=1;i<n;i++)
    {
        cin >> cur;
        if(cur-prev<=c)
            cou++;
        else
            cou=1;
        prev=cur;
    }
    cout << cou;
}
