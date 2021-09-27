#include <iostream>
using namespace std;

int main()
{
    int m,n;
    long long sum = 1;
    cin >> m;
    for (int i = 0;i < m;i++)
    {
        cin >> n;
        while(n)
        {
            sum *= n;
            n--;
        }
        cout << sum << endl;
        sum = 1;
    }
    return 0;
}
