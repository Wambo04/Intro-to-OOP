#include <iostream>

using namespace std;

int main()
{
    int maths, eng, french, music, cre, avg;
    cout <<"enter marks for five units"<<endl;
    cin >>maths>>eng>>french>>music>>cre;
    avg = (maths+eng+french+music+cre)/5;
    if (avg>=70 && avg<=100)
    {
        cout<<"grade A"<<endl;
    }
    else if (avg>=60 && avg<=69)
    {
        cout<<"grade B"<<endl;
    }
    else if (avg>=50 && avg<=59)
    {
        cout<<"grade C"<<endl;
    }
    else if (avg>=40 && avg<=49)
    {
        cout<<"grade D"<<endl;
    }
    else (avg<40);
    {
        cout<<"grade E"<<endl;
    }
    return 0;
}
