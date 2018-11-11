#include<iostream>
using namespace std;

int a[11][11];
int main()
{
    int m;
    cin >> m;
    for(int j=1;j<=m;j++)
        a[1][j]=1;
    for(int i=2;i<=m;i++)
        for(int  j=1;j<=m;j++)
            a[i][j]=a[i-1][j]+a[i][j-1];


    cout << a[m][m];

}
