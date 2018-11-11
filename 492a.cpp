#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total=0,cou=0,totalcube=0;
    while(1)
    {
        cou+=1;
        total=0;
        for(int i=1;i<=cou;i++)
        {
        total=total+i;
        }
        totalcube=totalcube+total;
        if(totalcube>n)
        {
            cou--;
            break;
        }
    }
    cout << cou;
}
