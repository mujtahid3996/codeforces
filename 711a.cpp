#include<iostream>
using namespace std;
bool check,input_taken;
int main()
{
    int n;
    cin >> n;
    char a[n][5];
    check=false;
    input_taken=false;
    for(int i=0; i<n; i++)
        for(int j=0; j<5; j++)
        {
            cin >> a[i][j];
            if(j>0)
            if(a[i][j]=='O' && a[i][j-1]=='O')
            {
                if(input_taken==false)
                {
                    check=true;
                    a[i][j]='+';
                    a[i][j-1]='+';
                    input_taken=true;
                }
            }

        }
    if(check)
    {
        cout << "YES" << endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
                cout << a[i][j];
            cout << endl;
        }
    }
    else
    {
        cout << "NO" ;
    }
}
