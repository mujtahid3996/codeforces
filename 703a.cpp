#include<iostream>
using namespace std;
int main()
{
    int x,y,coum=0,couc=0,n;
    cin >> n;
    while(n--)
    {
        cin >> x >> y;
        if(x>y)
            ++coum;
        else if(y>x)
            ++couc;
    }
    if(coum>couc)
        cout << "Mishka" <<endl;
    else if(coum<couc)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" ;

}
