#include<iostream>
using namespace std;
int main()
{
    int n,po=0,che,unt=0;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        cin >> che;
        if(che>0)
        {
            po=po+che;
        }
        else if(che<0)
        {
            unt++;
            if(po>0)
            {
                po--;
                unt--;
            }

        }
    }
    cout << unt;
}
