#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

struct person{
	char name[21];
	short mo;
	short ban;
	bool ganbu;
	bool xibu;
	short lunwen;
	int money;
}p[101];

int main()
{
	int num;
	cin>>num;
	char tmp;//暂存 Y N
	int max=0;
	int maxi;
	long long sum=0;
	int i=1;
	for(i=1;i<=num;i++)
	{
		//char tmp;
		cin>>p[i].name;
		cin>>p[i].mo;
		cin>>p[i].ban;
		cin>>tmp;
		p[i].ganbu=tmp=='Y'?true:false;
		cin>>tmp;
		p[i].xibu=tmp=='Y'?true:false;
		cin>>p[i].lunwen;
		
		p[i].money=0;
		if(p[i].mo>80 && p[i].lunwen>=1)//院士奖学金
		{
			p[i].money+=8000;
		}
		if(p[i].mo>85 && p[i].ban>80)//五四奖学金
		{
			p[i].money+=4000;
		}
		if(p[i].mo>90)//成绩优秀奖 
		{
			p[i].money+=2000;
		}
		if(p[i].mo>85 && p[i].xibu==true)//西部奖学金
		{
			p[i].money+=1000;
		}
		if(p[i].ban>80 && p[i].ganbu==true)//班级贡献奖
		{
			p[i].money+=850;
		}
		if(p[i].money>max)
		{
			max=p[i].money;
			maxi=i;
		}
		sum+=p[i].money;
	}
	cout<<p[maxi].name<<"\n"<<max<<"\n"<<sum;
return 0;
}
