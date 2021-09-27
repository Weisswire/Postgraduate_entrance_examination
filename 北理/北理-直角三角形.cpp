#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class CTriangle
{
public:
    CTriangle(int ax,int ay,int bx,int by,int cx,int cy)
    {
        a = (float)sqrt(abs(bx - ax) * abs(bx - ax) + abs(by - ay) * abs(by - ay));
        b = (float)sqrt(abs(cx - ax) * abs(cx - ax) + abs(cy - ay) * abs(cy - ay));
        c = (float)sqrt(abs(cx - bx) * abs(cx - bx) + abs(cy - by) * abs(cy - by));
    }
    ~CTriangle(){}
    float getC()
    {
        return a + b + c;
    }
    bool judge()
    {
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            return true;
        else
            return false;
    }
private:
    float a,b,c;
};
int main()
{
    int m;
    int ax,ay,bx,by,cx,cy;
    cin >> m;
    for (int i = 0;i < m;i++)
    {
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        CTriangle a(ax,ay,bx,by,cx,cy);
        if(a.judge())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        cout << fixed << setprecision(2) << a.getC() << endl;
    }
    return 0;
}
