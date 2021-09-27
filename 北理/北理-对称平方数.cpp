#include <iostream>
using namespace std;

bool judge(int i)
{
    int prior = i;
    int result = 0;
    while (i / 10)
    {
        result = result * 10 + i % 10;
        i /= 10;
    }
    if(i)
        result = result * 10 + i;
    if (result == prior)
        return true;
    else
        return false;
}
int main()
{
    for(int i = 1; i < 256; i++)
    {
        if(judge(i * i))
            cout << i << endl;
    }
    return 0;
}
