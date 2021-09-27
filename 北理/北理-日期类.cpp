#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
public:
    Date(int y,int m,int d):year(y),month(m),day(d){}
    ~Date(){}
    void getDate()
    {
        int leapyear = 0;
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            leapyear = 1;
        if(day == 31 &&( month == 1|| month == 3|| month == 5 || month == 7 || month == 8|| month == 10 || month == 12))
        {
            if(month == 12)
            {
                month = 1;
                year++;
            }
            month++;
            day = 1;
        }
        else if(day == 30 && ( month == 4|| month == 6|| month == 9 || month == 11 ))
        {
            month++;
            day = 1;
        }
        else if (day == 28 && month == 2 && leapyear != 1 )
        {
            month = 3;
            day = 1;
        }
        else if( day == 29 && month ==2 && leapyear == 1)
        {
            month = 3;
            day = 1;
        }
        else{
            day ++;
        }
        cout << year << "-" << setw(2) << setfill('0') <<  month << "-" << setw(2) << day << endl;
    }
private:
    int year,month,day;
};
int main()
{
    int n,y,m,d;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> y >> m >> d;
        Date date(y,m,d);
        date.getDate();
    }
    return 0;
}
