//a program to illustrate the working of a class
//public in c++
#include <iostream>
using namespace std;
//create a class addition
class addition{
public:
    int a,b,c;
    int product(){
    return (a*b*c);
    }
};
//function declaration
int main()
{
    //create an object addition1
    addition addition1;
    int product;
    addition1. a=22; //to store first number
    addition1. b=30; //to store second number
    addition1. c=50; //to store third number
    cout << "product is =" <<addition1.product()<<endl;
    return 0;
}
