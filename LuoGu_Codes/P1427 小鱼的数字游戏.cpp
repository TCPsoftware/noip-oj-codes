#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> a;
    int tmp;
    while(cin>>tmp&&tmp!=0)
    {
        a.push(tmp);
    }
    while(a.size()>0)
    {
        cout<<a.top()<<" ";
        a.pop();
    }
    return 0;
}
