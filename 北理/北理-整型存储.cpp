#include <iostream>
using namespace std;

class Store
{
public:
    Store(){ x = 0;y = 0;}
    void setStore(int a)
    {
        x = a;
        while(a / 10 > 0)
        {
            y = y * 10 + a % 10;
            a /= 10;
        }
        if(a)
            y = y *10 + a;
    }
    ~Store(){}
    int getX(){return x;}
    int getY(){return y;}
private:
    int x;
    int y;
};
int main()
{
    int m = 10;
    Store st[10];
    int x,Count = 0;
    while(m)
    {
        cin >> x;
        if(x == 0)
            break;
        else
        {
            st[10 - m].setStore(x);
            Count ++;
        }
        m--;
    }
    for(int i = 0; i < Count; i++)
    {
        cout << st[i].getX() << " " << st[i].getY() << endl;
    }
    return 0;
}
