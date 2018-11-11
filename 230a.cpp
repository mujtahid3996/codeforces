#include<iostream>
using namespace std;
int main()
{
    int temp;
    long int s,n,p=0;
    cin >> s >> n;
    int x[n];
    int y[n];
    for(int i=0; i<n; i++)
    {
        cin >> x[i] >> y[i];
        if(i>=1 && x[i]<x[i-1])
        {
            p=i;
            while(p!=0)
            {
                if(x[p]<x[p-1])
                {
                    temp=x[p-1];
                    x[p-1]=x[p];
                    x[p]=temp;
                    temp=y[p-1];
                    y[p-1]=y[p];
                    y[p]=temp;
                    p--;
                }
                else
                    break;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(s>x[i])
            s+=y[i];
        else
        {
            cout << "NO";
            return 0;
        }

    }
    cout << "YES";
    return 0;
}
