#include<iostream>
using namespace std;
int main()
{
    int n,cou25=0,cou50=0,cou100=0;
    bool ans=1;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];

        if(a[i]==25)
            {
                cou25++;
            }
        else if(a[i]==50)
            {
                if(cou25==0)
                {
                    ans=false;
                    break;
                }
                    --cou25;
                    ++cou50;
            }
        else if(a[i]==100)
            {
                if(cou25>=1 && cou50>=1)
                {
                    --cou25;
                    --cou50;
                }
                else if(cou25>=3)
                    cou25-=3;
                else
                {
                    ans=0;
                    break;
                }
            }
    }
    if(ans)
        cout << "YES";
    else
        cout << "NO";

}
