#include <iostream>
using namespace std;
 int main()
 {
    int n,i,m,count=0;
    cin >> n;
    int p,q;
    cin >> p;
    int x[p];
    int merg[n];
    for(i=1;i<=p;i++)
    {
        cin >> x[i];
        m=x[i];
        merg[m]=1;
    }
    cin >> q;
    int y[q];
    for(i=1;i<=q;i++)
    {
        cin >> y[i];
        m=y[i];
        merg[m]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(merg[i]==1)
            count++;
    }
    if(count==n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";

 }
