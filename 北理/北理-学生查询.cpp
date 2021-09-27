#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n,m,q;
    int a,b;
    char c;
    string name;
    string sex;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        int id[m];
        int age[m];
        string NAME[m];
        string SEX[m];
        for (int j = 0; j < m; j++)
        {
            cin >> a >> name >> sex >> b;
            id[j] = a;
            NAME[j] = name;
            SEX[j] = sex;
            age[j] = b;
        }
        cin >> q;
        for(int k = 0;k < m;k++)
        {
            if(id[k] == q)
            {
                cout << id[k] << " " << NAME[k] << " " << SEX[k] << " " << age[k] << endl;
            }
        }
    }
    return 0;
}
