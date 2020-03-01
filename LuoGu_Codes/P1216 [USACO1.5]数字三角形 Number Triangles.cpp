#include<iostream>
#include<cstring>
//using namepsace std;
using std::cin;
using std::cout;
using std::memset;
int main()
{
    int l;
    cin>>l;
    int a[l+2][l+1];
    int b[l+1][l+1];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>a[i][j];
            b[i][j] = a[i][j] + ((b[i-1][j-1]>b[i-1][j])?b[i-1][j-1]:b[i-1][j]);
        }
    }
    int max=0;
    for(int q=1;q<=l;q++)
    {
        max = b[l][q]>max?b[l][q]:max;
    }
    cout<<max;
    return 0;
}
