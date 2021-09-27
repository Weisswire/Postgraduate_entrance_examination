#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m,n,x;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> n;
        int a[n+1];
        int sum = 0;
        for(int j = 0; j <= n; j++)
        {
            cin >> a[j];
        }
        cin >> x;
        for (int k = 0; k <= n; k++)
        {
            sum += a[k] * pow(x,k);
        }
        cout << sum << endl;
    }
    return 0;
}
