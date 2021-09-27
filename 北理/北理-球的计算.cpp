#include <iostream>
#include <math.h>
#include <iomanip>
#define PI 3.1415926535
using namespace std;

class Point
{
public:
    Point(int x,int y,int z):x(x),y(y),z(z){}
    ~Point(){}
    int getX(){return x;}
    int getY(){return y;}
    int getZ(){return z;}
private:
    int x,y,z;
};
int main()
{
    int m;
    int x0,y0,z0,x1,y1,z1;
    double r,v;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> x0 >> y0 >> z0 >> x1 >> y1 >> z1;
        Point R(x0,y0,z0);
        Point S(x1,y1,z1);
        r = sqrt(pow(S.getX() - R.getX(),2) + pow(S.getY() - R.getY(),2) + pow(S.getZ() - R.getZ(),2));
        v = 4.0/3.0 * PI * pow(r,3);
        cout << fixed << setprecision(2) << r << " " << v << endl;
    }
    return 0;
}
