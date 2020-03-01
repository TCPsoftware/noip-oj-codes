/*
作者:TCPSoft
题目:p1202 求和
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    long long sum=0;
    long long tmp;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>tmp;
        sum+=tmp;
    }
    cout<<sum;
    return 0;
}
