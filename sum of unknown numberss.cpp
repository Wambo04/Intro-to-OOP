#include <iostream>

using namespace std;

int main()
{
    int i, x, y, sum=0;
    cout<<"enter starting point"<<endl;
    cin>>x;
    cout<<"enter ending point"<<endl;
    cin>>y;
    for (i=x; i=y; i++)
    {
        cout<<i<<endl;
        sum=sum+1;
    }
    cout<<"total sum of"<<x<<"and"<<y<<"is"<<sum;
    return 0;
}
