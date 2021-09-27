#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int i)
{
    int result = 0;
    while(i/10)
    {
        result = result * 10 + i % 10;
        i = i / 10;
    }
    if(i)
        result = result * 10 + i;
    return result;
}
int main()
{
    for(int i = 1000; i < 10000; i++)
    {
        if(i * 9 == reverse(i))
            cout << i << endl;
    }
    return 0;
}
