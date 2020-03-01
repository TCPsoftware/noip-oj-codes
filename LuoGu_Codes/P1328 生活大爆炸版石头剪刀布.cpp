//下面代码是通过的
#include<iostream>
#include<cstdio>
using namespace std;
int a[5][5]={
{0,0,1,1,0},
{1,0,0,1,0},
{0,1,0,0,1},
{0,0,1,0,1},
{1,1,0,0,0}
};
int b[5][5]={
{0,1,0,0,1},
{0,0,1,0,1},
{1,0,0,1,0},
{1,1,0,0,0},
{0,0,1,1,0}
};
int aa[205];
int bb[205];
int main()
{
    int n,na,nb;
    int sa=0,sb=0;//分数 
    scanf("%d%d%d",&n,&na,&nb);
    for(int i=0;i<na;i++)
    {
        scanf("%d",&aa[i]);
    }
    for(int i=0;i<nb;i++)
    {
        scanf("%d",&bb[i]);
    }
    for(int i=0;i<n;i++)
    {
        sa+=a[aa[i%na]][bb[i%nb]];
        sb+=b[aa[i%na]][bb[i%nb]];
    }
    cout<<sa<<" "<<sb;
    return 0;
}


//下面代码是全部代码
/*
#include<iostream>
#include<cstdio>
using namespace std;
//struct int2
//{
//	int i1;
//	int i2;
//};
//int2 pd(int a,int b);
int a[5][5]={
{0,0,1,1,0},
{1,0,0,1,0},
{0,1,0,0,1},
{0,0,1,0,1},
{1,1,0,0,0}
};
int b[5][5]={
{0,1,0,0,1},
{0,0,1,0,1},
{1,0,0,1,0},
{1,1,0,0,0},
{0,0,1,1,0}
};
int aa[205];
int bb[205];
int main()
{
//	freopen("rps.in","r",stdin);
//	freopen("rps.out","w",stdout);
	int n,na,nb;
	int sa=0,sb=0;//分数 
	scanf("%d%d%d",&n,&na,&nb);
//	cout<<n<<na<<nb;
//	int a[205]={0};
//	int b[205]={0};
	for(int i=0;i<na;i++)
	{
		scanf("%d",&aa[i]);
//		cout<<a[i];
	}
	for(int i=0;i<nb;i++)
	{
		scanf("%d",&bb[i]);
//		cout<<b[i];
	}
	for(int i=0;i<n;i++)
	{
		sa+=a[aa[i%na]][bb[i%nb]];
		sb+=b[aa[i%na]][bb[i%nb]];
	}
	cout<<sa<<" "<<sb;
	return 0;
}




//int2 pd(int a,int b)
//{
//	int2 re;
//	int2 y;y.i1=1;y.i2=0;
//	int2 s;s.i1=0;s.i2=1;
//	int2 p;p.i1=0;p.i2=0;
//	switch (a)
//	{
//		case 0:
//		{
//			switch (b)
//			{
//				case 0:
//				{
//					return p;
//					break;
//				}
//				case 1:
//				{
//					return s;
//					break;
//				}
//				case 2:
//				{
//					return y;
//					break;
//				}
//				case 3:
//				{
//					return y;
//					break;
//				}
//				case 4:
//				{
//					return s;
//					break;
//				}
//			}
//			break;
//		}
//		case 1:
//		{
//			switch (a)
//			{
//				case 0:
//				{
//					return y;
//					break;
//				}
//				case 1:
//				{
//					return p;
//					break;
//				}
//				case 2:
//				{
//					return s;
//					break;
//				}
//				case 3:
//				{
//					return ;
//					break;
//				}
//				case 4:
//				{
//					re.i1=0;
//					re.i2=1;
//					break;
//				}
//			}
//			break;
//		}
//		case 2:
//		{
//			switch (a)
//			{
//				case 0:
//				{
//					re.i1=;
//					re.i2=;
//					break;
//				}
//				case 1:
//				{
//					break;
//				}
//				case 2:
//				{
//					break;
//				}
//				case 3:
//				{
//					break;
//				}
//				case 4:
//				{
//					break;
//				}
//			}	
//			break;
//		}
//		case 3:
//		{
//			switch (a)
//			{
//				case 0:
//				{
//					break;
//				}
//				case 1:
//				{
//					break;
//				}
//				case 2:
//				{
//					break;
//				}
//				case 3:
//				{
//					break;
//				}
//				case 4:
//				{
//					break;
//				}
//			}
//			break;
//		}
//		case 4:
//		{
//			switch (a)
//			{
//				case 0:
//				{
//					break;
//				}
//				case 1:
//				{
//					break;
//				}
//				case 2:
//				{
//					break;
//				}
//				case 3:
//				{
//					break;
//				}
//				case 4:
//				{
//					break;
//				}
//			}
//			break;
//		}
//	}
//	return re;
//}
*/
