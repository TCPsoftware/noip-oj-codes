#include <iostream>
using namespace std;

int main()
{
    int l,m;
    cin>>l>>m;
    int a[l+1]={0};
    for(int i=1;i<=m;i++)
    {
        int a1,a2;
        cin>>a1>>a2;
        for(int j=a1;j<=a2;j++)
        {
            a[j]=1;
        }
    }
    int tree=0;
    for(int i=0;i<=l+1;i++)
    {
        if(a[i]==0)
        {
            tree++;
        }
    }
    cout<<tree;
    return 0;
}
