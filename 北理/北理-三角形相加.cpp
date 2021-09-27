#include <iostream>
using namespace std;

class CTriangle
{
public:
    CTriangle(int y,int x):y(y),x(x){}
    ~CTriangle(){}
    int getX(){return x;}
    int getY(){return y;}
private:
    int x,y;
};
int main()
{
    int a,b,sumx = 0,sumy = 0;
    cin >> a >> b;
    while(a != 0)
    {
        sumx += b;
        sumy += a;
        cin >> a;
        if (a == 0)
            break;
        else
            cin >> b;
    }
        cout << "A(0," << sumy << "),B(0,0),C(" << sumx << ",0)" << endl;
    return 0;
}
