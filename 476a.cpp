#include<iostream>
using namespace std;
int main()
{
    int m,n,moves;
    cin >> n>> m;
    moves=n-(n/2);
    do
    {
        if(moves%m==0)
            {
                cout << moves;
                return 0;
            }
        moves++;

    }while(moves<=n);
    cout << -1;
}
