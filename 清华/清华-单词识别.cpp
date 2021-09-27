#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        map<string, int> mp;
        string temp;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ' || s[i] == ',' || s[i] == '.')
            {
                if(temp != "")                //当前记录的字符串不为空就插入映射中（为空的话就继续为空，看下一个）并置空
                    mp[temp]++;
                temp = "";                    //这个放在if里和外都行
            }
            else                              //未遇到空格或符号就一直记录字符（转为小写记录）
            {
                temp += tolower(s[i]);
            }
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << ":" << it->second << endl;
        }
    }
    return 0;
}
