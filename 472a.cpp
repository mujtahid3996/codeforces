#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int x=4;
    for(;;)
    {
        int p=n-x;
        if(p%2==0||p%3==0||p%5==0||p%7==0||p%9==0)
            {
                cout<< x <<" "<< p <<endl;
                break;
            }
        else
            {
                x=x+2;
            }
    }


}
