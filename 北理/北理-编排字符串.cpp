#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m;
    cin >> m;
    string str[m];
    for (int i = 0; i < m; i++)
    {
        cin >> str[i];
        if(i < 4)
        {
            for(int j = i,k = 1; j >= 0; j--,k ++ )
            {
                cout << k << "=" << str[j] << " ";
            }
            cout << endl;
        }
        else
        {
            for(int j = i,k = 1; j > i - 4; j--,k ++ )
            {
                cout << k << "=" << str[j] << " ";
            }
            cout << endl;
        }
        }
    return 0;
}
