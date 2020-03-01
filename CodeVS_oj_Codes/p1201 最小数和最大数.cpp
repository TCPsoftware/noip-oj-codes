/*
作者:TCPSoft
题目:p1201 最小数和最大数
*/

#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;
int main()
{
    long long min=LLONG_MAX;
	long long max=LLONG_MIN;
    int n;
    long long tmp;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin>>tmp;
        min=tmp<min?tmp:min;
        max=tmp>max?tmp:max;
    }
    cout << min<<" "<<max << endl;
    return 0;
}
