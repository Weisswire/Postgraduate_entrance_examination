#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class CPoint
{
public:
    CPoint(int x = 0,int y = 0):x(x),y(y){}
    ~CPoint(){}
    float operator - (CPoint &T)
    {
        int a = T.x - x;
        int b = T.y - y;
        return sqrt(a * a + b * b);
    }
private:
    int x,y;
};
int main()
{
    int m,a,b,c,d;
    cin >> m;
    for (int i = 0;i < m; i++)
    {
        cin >> a >> b >> c >> d;
        CPoint A(a,b);
        CPoint B(c,d);
        float result = A - B;
        cout << fixed << setprecision(2) << result << endl;
    }
    return 0;
}
