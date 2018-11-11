#include<iostream>
using namespace std;
bool color,black;
int main()
{
    int m,n;
    cin>>m>>n;
    char a[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
    {
        cin >> a[i][j];
        if(a[i][j]=='W' ||a[i][j]=='G' || a[i][j]=='B')
            black=true;
        else
            color=true;
    }
    if(color)
        cout <<"#Color";
    else
        cout << "#Black&White";
}
