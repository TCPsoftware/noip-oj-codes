#include<iostream>
using namespace std;

int main()
{
    int a[11];//ƻ�����߶�
    int h=0;//���
    int can=0;//��ժƻ��
    for(int i=1;i<=10;i++)
    {
        cin>>a[i];
    }
    cin>>h;
    for(int i=1;i<=10;i++)
    {
        if(h+30>=a[i])
        {
            can++;
        }
    }
    cout<<can;
    return 0;
}
