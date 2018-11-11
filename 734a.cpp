#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c;
    multiset<char> ms;
    for(int i=0;i<n;i++)
        {
            cin >> c;
            ms.insert(c);
        }
     if(ms.count('A')>ms.count('D'))
            cout << "Anton";
     else if(ms.count('D')>ms.count('A'))
            cout << "Danik";
        else
            cout << "Friendship";
}
