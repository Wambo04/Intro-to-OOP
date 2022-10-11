#include <iostream>

using namespace std;

int main()
{
    int salary, service, bonus, net salary;
    cout <<"enter salary of employee"<<endl;
    cin >>salary;
    cout <<"years of service"<<endl;
    cin >>service;
    if (service>10)
    {
        bonus=salary*10/100;
    }
    else if (service>=6 && service<=10)
    {
        bonus=salary*8/100;
    }
    else (service<6);
    {
        bonus=salary*5/100;
    }
    net salary=salary+bonus;
    cout<<"net salary is: "<<salary;
    return 0;
}
