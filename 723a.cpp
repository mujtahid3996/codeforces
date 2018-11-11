#include<iostream>
using namespace std;
int main()
{
    int x,y,z,s;
    cin >> x >> y>> z;
    if(x>=y && x<=z || x>=z && x<=y)
            {
               if(x>=y)
                    s=x-y+z-x;
               else
                    s=x-z+y-x;

            }
    else if(y>=x && y<=z || y>=z && y<=x)
            {
                if(y>=x)
                     s=y-x+z-y;
                else
                    s=y-z+x-y;
            }
    else if(z>=x && z<=y || z>=y && z<=x)
            {
                if(z>=x)
                    s=z-x+y-z;
                else
                    s=z-y+x-z;
            }
    cout << s;
}
