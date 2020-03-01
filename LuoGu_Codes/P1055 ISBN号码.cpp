#include <iostream>
using namespace std;

int main()
{
    char s[13];
    for(int i=0;i<13;i++)
    {
        cin>>s[i];
    }//x-xxx-xxxxx-x
    ///0123456789
    ///1 234 56789 10
    int sum = ((int)s[0]-48)*1 +
            ((int)s[2]-48)*2 +
            ((int)s[3]-48)*3 +
            ((int)s[4]-48)*4 +
            ((int)s[6]-48)*5 +
            ((int)s[7]-48)*6 +
            ((int)s[8]-48)*7 +
            ((int)s[9]-48)*8 +
            ((int)s[10]-48)*9;
    if(s[12]!='X')
    {
        if(sum%11==s[12]-48)
        {
            cout<<"Right";
        }
        else
        {
            cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]
                <<s[7]<<s[8]<<s[9]<<s[10]<<s[11];
            if(sum%11<10)
            {
                cout<<sum%11;
            }
            else
            {
                cout<<"X";
            }
        }
    }
    else
    {
        if(sum%11==10)
        {
            cout<<"Right";
        }
        else
        {
            cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4]<<s[5]<<s[6]
                <<s[7]<<s[8]<<s[9]<<s[10]<<s[11];
            if(sum%11<10)
            {
                cout<<sum%11;
            }
            else
            {
                cout<<"X";
            }
        }
    }
    return 0;
}
