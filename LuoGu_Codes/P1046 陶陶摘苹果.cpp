#include<iostream>
using namespace std;

int main()
{
    int a[11];//苹果树高度
    int h=0;//身高
    int can=0;//可摘苹果
    for(int i=1;i<=10;i++)
    {
        cin>>a[i];
    }
    cin>>h;
    for(int i=1;i<=10;i++)
    {
        if(h+30>=a[i])
        {
            can++;
        }
    }
    cout<<can;
    return 0;
}
