#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(int a,int b):x(a),y(b){}
    ~Complex(){}
    int getX(){return x;}
    int getY(){return y;}
    Complex operator + (Complex &c)
    {
        Complex temp(0,0);
        temp.x = x + c.getX();
        temp.y = y + c.getY();
        return temp;
    }
private:
    int x,y;
};
int main()
{
    int m,a1,a2,b1,b2,flag;
    cin >> m;
    for(int i = 0; i < m; i++ )
    {
        flag = 0;
        cin >> a1 >> b1 >> a2 >> b2;
        Complex cp1(a1,b1);
        Complex cp2(a2,b2);
        Complex temp = cp1 + cp2;
        int x = temp.getX();
        if(temp.getY() >= 0)
            flag = 1;
        int y = temp.getY();
        if(flag)
            cout << x << "+" << y << "i" << endl;
        else
            cout << x << y << "i" << endl;
    }
    return 0;
}
