/*
作者:TCPSoft
题目:p1203 判断浮点数是否相等
*/

#include <iostream>
using namespace std;
int main()
{
    double a,b,d=0.0;
    cin>>a>>b;
    d=a>b?a-b:b-a;
    cout<<(d<=1e-8?"yes":"no");
    return 0;
}
