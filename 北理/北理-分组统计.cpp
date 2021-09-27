#include <iostream>
#include <map>
#include <set>

using namespace std;
map<int,int> mp[105];   //用来统计对应组的对应数据出现的次数，顺便排序
int xl[105];
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        set<int> st;
        for(int i = 0 ;i<m;i++)
        {
            cin >> xl[i];
            st.insert(xl[i]);
        }
        set<int> group;
        for(int i = 0 ;i<m;i++)
        {
            int x;
            cin >> x;
            mp[x][xl[i]]++;
            group.insert(x);
        }
        for(set<int>::iterator it = group.begin();it!=group.end();it++)
        {
            int x = *it;
            cout << x << "={";

            for(set<int>::iterator itt = st.begin();itt!=st.end();itt++)
            {
                int y = *itt;
                cout << y << "=" << mp[x][y] ;
                itt++;
                if(itt != st.end())
                cout << ",";
                itt--;
            }
            cout << "}" << endl;
            mp[x].clear();
        }
    }
    return 0;
}
