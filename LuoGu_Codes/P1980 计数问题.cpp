#include<iostream>
using namespace std;

int main()
{
    int a=0,n=0;
    cin>>a>>n;
    int t=0;
    for(int i=1;i<=a;i++)
    {
        int tmp=i;
        while(tmp!=0)
        {
            if(tmp%10==n)
            {
                t++;
            }
            tmp/=10;
        }
    }
    cout<<t;
    return 0;
}
