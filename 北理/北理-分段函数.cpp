#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,m;
    float y;
    cin >> m;
    for(int i = 0;i < m; i ++)
    {
        cin >> x;
        if(x >=0 && x < 2)
            y = 0-x + 2.5;
        else if(x >= 2 && x < 4)
            y = 2 - 1.5*(x-3)*(x-3);
        else if(x >= 4 && x < 6)
            y = (float)x/2 - 1.5;
        cout <<"y="<< fixed << setprecision(1) << y << endl;
    }
    return 0;
}
