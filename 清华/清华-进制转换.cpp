#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> myVector;

string divide(string str, int n)//相当于实现n/2的操作，只要商。
{
    int mode = 0;
    for (int i = 0; i < str.size(); i++)
    {
        int current = mode * 10 + str[i] - '0';
        str[i] = current / n + '0';
        mode = current % n;
    }
    int pos = 0;
    while (str[pos] == '0')
    {
        pos++;
    }
    return str.substr(pos);
}

int main()
{
    string str;
    while (cin >> str)
    {
        while (str.size())
        {
            int last = str[str.size() - 1] - '0';
            myVector.push_back(last % 2);
            str = divide(str, 2);
        }
        for (int i = myVector.size() - 1; i >= 0; i--)
        {
            printf("%d", myVector[i]);
        }
        cout << endl;
        myVector.clear();
    }
    return 0;
}
