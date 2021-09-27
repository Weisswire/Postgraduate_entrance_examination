#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m,n;
    float h;
    float sum = 0;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> h >> n;
        sum = h;
        for(int j = 1; j < n; j++)
        {
            sum += (h/2.0) * 2;
            h = h/2.0;
        }
        cout << fixed << setprecision(2) << sum << endl;
        sum = 0;
    }
    return 0;
}
