#include <iostream>

using namespace std;

int main()
{
    int age;
    float ageinmonth,agindays;
    cout<<"\nEnter your age in year:";
    cin>>age;
    ageinmonth=age*12;
    agindays=age*365;
    cout<<"\nPassed months:"<<ageinmonth;
    cout<<"\nPassed days:"<<agindays;
    return 0;
}
