#include <iostream>
using namespace std;

int main()
{
    int x,m,sum = 0;
    cin >> m;
    for(int j = 0; j < m;j++)
    {
        cin >> x;
        if(x >= 0)
        {
            for (int i = x; i <= 2*x; i++)
            {
                sum += i;
            }
        }
        else
        {
            for(int i = x; i >= 2*x; i--)
            {
                sum += i;
            }
        }
        cout << sum << endl;
        sum = 0;
    }
	return 0;
}
