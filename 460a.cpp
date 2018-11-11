#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n;
    cin >> m;
    int cou=n;
    int i=n+1;
    int p;
    int j=1;
    for(;;)
    {
        p=j*m;
        if(p<i)
            {
                cou++;
                i++;
                j++;
            }
        else
            break;

    }
    cout << cou;
}
