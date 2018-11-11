#include<iostream>
using namespace std;
long long nc2(long long n)
{
    if(n<2)
        return 0;
    else
        return n*(n-1)/2;

}
int main()
{
    long long n,m;
    cin >> n >> m;
    long long minnoofpairs,maxnoofpairs;
    maxnoofpairs=nc2(n-m+1);
    minnoofpairs=(m-n%m)*(nc2(n/m))+(n%m)*(nc2(n/m+1));
    cout << minnoofpairs <<" "<< maxnoofpairs;
}
