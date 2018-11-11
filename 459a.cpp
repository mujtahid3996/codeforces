#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,dist;
    cin >> x1 >> y1 >> x2 >>y2;
    if(x1!=x2&& y1!=y2)
    {
        if(abs(x1-x2)!=abs(y1-y2))
            cout << -1;
        else
            cout << x1 << " " <<y2 <<" "<<x2 <<" "<<y1;

    }
    else if(x1==x2)
    {
        dist=abs(y1-y2);
        cout << x1+dist << " "<<y1 << " " << x2+dist << " "<<y2;
    }
    else if(y1==y2)
    {
        dist=abs(x1-x2);
        cout << x1 << " " <<y1+dist <<" " <<x2 << " " <<y2+dist;
    }
    return 0;
}
