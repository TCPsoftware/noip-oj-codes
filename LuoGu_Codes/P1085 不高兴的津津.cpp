#include<iostream>
using namespace std;
int main()
{
    int t=0,date=0;
    for(int i=1;i<=7;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a+b>t)
        {
            t=a+b;
            date=i;
        }
    }
    cout<<date;
    return 0;
}
