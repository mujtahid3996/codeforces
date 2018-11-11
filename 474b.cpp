#include<iostream>
#include<vector>
using namespace std;
vector <int> v1;
int main()
{
    int n,sum=0,a,m,t;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >>a;
        sum+=a;
        v1.push_back(sum);
    }
    cin >> m;
    for(int i=0;i<m;i++)
    {
        cin >> t;
        if(t<=v1[0])
            cout << 1 << endl;
        else
            cout <<lower_bound(v1.begin(),v1.end(),t)-v1.begin()+1 << endl;
    }


}
