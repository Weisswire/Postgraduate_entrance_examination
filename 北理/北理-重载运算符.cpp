#include <iostream>
#include <math.h>
#include <iomanip>

#define PI 3.1415926535
using namespace std;

class Angle
{
public:
    Angle(int a):angle(a){}
    ~Angle(){}
    int getAngle(){return angle;}
    int operator -(Angle &t)
    {
        return getAngle() - t.getAngle();
    }
private:
    int angle;
};
int main()
{
    int m,a,b,sub;
    double val;
    cin >> m;
    for(int i = 0;i < m;i++)
    {
        cin >> a >> b;
        Angle A(a);
        Angle B(b);
        sub = A - B;
        val = PI/180;
        cout << fixed << setprecision(2) << sin(sub*val) << endl;
    }
    return 0;
}
