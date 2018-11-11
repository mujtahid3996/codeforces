#include<string>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    string s;
    int n;
    map<string,int> database;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;

        if(database.count(s)==0)
        {
            cout << "OK" <<endl;
            database[s]=1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s]+=1;

        }


    }
}
