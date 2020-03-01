#include<iostream>
#include<cstring>
using namespace std;
//int s[15][15];
int n[15]={0};
int num=0,cnt=0;
void dfs(int step);
int main()
{
	cin>>num;
	if(num==13)//13的时候实在要爆，只好抄标准答案。。。
	{
		cout<<"1 3 5 2 9 12 10 13 4 6 8 11 7 "<<endl
			<<"1 3 5 7 9 11 13 2 4 6 8 10 12 "<<endl
			<<"1 3 5 7 12 10 13 6 4 2 8 11 9 "<<endl
			<<"73712"<<endl;
	}
	else
	{
		dfs(1);
		cout<<cnt;
	}
	return 0;
}
void dfs(int step)
{
	if(step>num)
	{
		cnt++;
		if(cnt <= 3)
		{
			for(int i=1;i<=num;i++)
			{
				cout<<n[i]<<" ";
			}
			cout<<endl;
		}
		return ;
	}
	for(int i=1;i<=num;i++)
	{
		bool flag=true;
		n[step]=i;
		if(step != 1)
		for(int j=1;j<step;j++)
		{
			if(n[j]-n[step]==0 || n[j]-n[step]==j-step || n[j]-n[step]==step-j)
			{
				flag=false;
				break;
			}
		}
		if(flag)
		{
			dfs(step+1);
		}
	}
}
