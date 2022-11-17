//program to find the area of a circle
#include <iostream>
using namespace std;
int main()
{
    int radius;
    float area;
    cout<<"enter radius"<<endl;
    cin>>radius;
    area=circle(radius); //function calling
    cout<<"the area is"<<area<<endl;
    return 0;
}
float circle (int r)
{
 //function definition
 float area;
 area=3.142*r*r;
 return area;
}
