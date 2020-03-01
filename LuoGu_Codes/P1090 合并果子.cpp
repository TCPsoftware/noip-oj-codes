#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int NUM = 10005;
int h[NUM]={0};
bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	int n=0,ans=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>h[i];
		
	sort(h,h+n,cmp);
	for(int i=n-1;i>0;i--)
	{
		int t=0;
		int p=0;
		t=h[i]+h[i-1];
		ans+=t;
		for(int j=i-2;j>=0;j--)
		{
			if(h[j]<t)
			{
				h[j+1]=h[j];
				p=j;
			}
			else
			{
				p=j+1;
				break;
			}
		}
		h[p]=t;
	}
	cout<<ans;
	return 0;
}
