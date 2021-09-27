#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> ls;
    list <int> :: iterator it;
    int m,n,Count = 1;
    cin >> m;
    for(int i = 0;i < m;i++)
    {
        cin >> n;
        for( int j = 1;j <= n;j++)
        {
            ls.push_back(j);
        }
        it = ls.begin();
        while(!ls.empty())
        {
            if(Count == 3)
            {
                cout << *it << " ";
                it = ls.erase(it);
                Count = 1;
            }
            else
            {
                Count++;
                it++;
            }
            if(it == ls.end())
                it = ls.begin();
        }
        cout << endl;
    }
    return 0;
}
