#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#define P 100000007
#define H 10013
#define LL long long
#define ULL unsigned long long
#define IOF 1e10
#define debug(x) cerr<<#x<<"="<<x<<endl
using namespace std;
int num=0,ans1=-1,ans2=0;//注意ans1初始需要赋值为-1，若为0，则可能会重复判断
bool kkk=true;
string s,f;
int main()
{
    getline(cin,s);
    getline(cin,f);
    if(s[s.length()-1]!=' ')s+=' ';//注意点！！！
    transform(s.begin(), s.end(), s.begin(), ::toupper);//大小写转换（这里都是转化为大写）
    transform(f.begin(), f.end(), f.begin(), ::toupper);
    f+=" ";
    for(int i=0;i<=f.length();i++)
    {
        for(int j=0;j<s.length();j++)
        {
            if(f[j+i]!=s[j])kkk=false;//依次枚举，逐个比较
        }
        if(kkk==true)
        {
            if(f[i-1]==' ' || i==0)
            {
                ans2++;
                if(ans1==-1)ans1=i;
            }
        }
        kkk=true;
    }
    if(ans1==-1)printf("%d",ans1);
    else printf("%d %d",ans2,ans1);//注意-1的输出！
    return 0;
}
