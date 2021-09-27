#include <iostream>
#include <iomanip>
using namespace std;

#define ISYEAP(x) x % 4 == 0 && x % 100 != 0 || x % 400 == 0 ? 1 : 0
int main()
{
    int n,y,m,d,x;
    int a[13][2] =
    {
        0,0,
        31,31,
        28,29,
        31,31,
        30,30,
        31,31,
        30,30,
        31,31,
        31,31,
        30,30,
        31,31,
        30,30,
        31,31
    };
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> y >> m >> d >> x;
        for(int j = 0; j < x; j++)
        {
            d++;
            if(d > a[m][ISYEAP(y)])
            {
                d = 1;
                m++;
                if(m > 12)
                {
                    m = 1;
                    y++;
                }
            }
        }
        cout << setw(4) << setfill('0') << y << "-"
             << setw(2) << setfill('0') << m << "-"
             << setw(2) << setfill('0') << d << endl;
    }
    return 0;
}
