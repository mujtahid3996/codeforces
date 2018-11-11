#include<iostream>
using namespace std;
#define house 1
#define shop1 2
#define shop2 3
int main()
{
    int d1,d2,d3,location;
    cin >> d1 >> d2 >> d3;
    int path_traveled=0;
    if(d1<d2)
    {
        location=shop1;
        path_traveled+=d1;
    }
    else
    {
        location=shop2;
        path_traveled+=d2;
    }
    if(d1+d2<d3)
    {
        path_traveled=path_traveled+d1+d2;
        if(location==shop1)
            location=shop2;
        else
            location=shop1;
    }
    else
    {
        path_traveled=path_traveled+d3;
        if(location==shop1)
            location=shop2;
        else
            location=shop1;
    }
    if(location==shop1)
    {
        if(d1<d2+d3)
            path_traveled+=d1;
        else
            path_traveled=path_traveled+d2+d3;
    }
    else
    {
        if(d2<d1+d3)
            path_traveled+=d2;
        else
            path_traveled=path_traveled+d1+d3;
    }

    cout << path_traveled;

}
