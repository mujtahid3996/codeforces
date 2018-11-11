#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    int q,m;
    cin >> q;
    int cou=0;
    for(int i=0;i<q;i++)
    {
        cin >> m;
        cou=upper_bound(a.begin(),a.end(),m)-a.begin();
        cout << cou << endl;
        cou=0;
    }

}
