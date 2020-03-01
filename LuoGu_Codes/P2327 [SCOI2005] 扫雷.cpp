#include<iostream>
#include<cstring>
using namespace std;
void sl(int start,int end,int n2,int n3);//扫雷递归

int can = 0;//可能性can
int a[10001];
//a[0]=0;

int main()
{
	memset(a,0,sizeof(a));
	int n;//数组有效长度
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];//读入数组a
	}
	sl(1,n,0,0);
	sl(1,n,0,1);
	cout<<can;
	return 0;
}
void sl(int start,int end,int n2,int n3)
{
	if(start<end)//没到结尾 
	{
		if(n2+n3==a[start])//左+中满足a[] 
		{
			sl(start+1,end,n3,0);
		}
		else if(n2+n3>a[start])//左+中大于a[] 
		{
			return;
		}
		else//小于，有多种情况 
		{
			if(a[start]==3)//a[]==3
			{
				if(n2==1&&n3==1)
				{
					sl(start+1,end,1,1);
				}
				else
				{
					return;
				}
			}
			else if(a[start]==2)//a[]==2
			{
				if(n2==0&&n3==1)
				{
					sl(start+1,end,1,1);
				}
				else if(n2==1&&n3==0)
				{
					sl(start+1,end,0,1);
				}
				else
				{
					return;
				}
			}
			else if(a[start]==1)//a[]==1
			{
				sl(start+1,end,0,1);
			}
		}
	}
	else//到尾了 
	{
		if(n2+n3==a[start])
		{
			can++;
		}
	}
}
