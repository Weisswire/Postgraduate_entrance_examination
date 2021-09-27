#include <iostream>
#include <math.h>
using namespace std;

void E(int e)
{
    int sum = 0;
    for(int i = 1; i <= sqrt(e); i++)
    {
        if(e % i == 0 && e / i != i)
            sum += i + e / i;
        else if(e % i == 0 && e / i == i)
            sum += i;
    }
    if(sum - e == e)
        cout << e << " ";
}
void G(int g)
{
    int sum = 0;
    for(int i = 1; i <= sqrt(g); i++)
    {
        if(g % i == 0 && g / i != i)
            sum += i + g / i;
        else if(g % i == 0 && g / i == i)
            sum += i;
    }
    if(sum - g > g)
        cout << g << " ";
}
int main()
{
    cout << "E: ";
    for(int k = 2; k <= 60; k ++)
    {
        E(k);
    }
    cout << "G: ";
    for(int k = 2; k <= 60; k ++)
    {
        G(k);
    }
    return 0;
}
