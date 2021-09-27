#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class Solution
{
public:
    Solution(int a,int b,int c):a(a),b(b),c(c){}
    ~Solution(){}
    void Calculate()
    {
        float dt = b*b - 4*a*c;
        if(a == 0)
        {
            cout << "x=" << fixed << setprecision(2) << -b/1.0*c << endl;
        }
        else if(dt < 0)
            cout << -1 << endl;
        else if(dt == 0)
        {
            float x = (-b + sqrt(dt))/(2*a);
            cout << "x=" << fixed << setprecision(2) << x << endl;
        }

        else if(dt > 0)
        {
            float x1 = (-b - sqrt(dt))/(2*a);
            float x2 = (-b + sqrt(dt))/(2*a);
            cout << "x1=" << fixed << setprecision(2) << x1 << "," << "x2=" << x2 << endl;
        }
    }
private:
    int a,b,c;
};
int main()
{
    int m,a,b,c;
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        Solution s(a,b,c);
        s.Calculate();
    }
    return 0;
}
