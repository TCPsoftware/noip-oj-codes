#include <iostream>
using namespace std;
int main()
{
    int $self=0,$mum=0;
    int tmp;
    int out=0;
    for(int i=1;i<=12;i++)
    {
        $self+=300;
        cin>>tmp;
        if($self-tmp<0)
        {
            out=i;
            break;
        }
        else if($self-tmp>=100)
        {
            $mum+=($self-tmp)-($self-tmp)%100;
            $self=($self-tmp)%100;
        }
        else
        {
            $self=$self-tmp;
        }
    }
    if(out!=0)
    {
        cout<<"-"<<out;
    }
    else
    {
        $self+=(int)$mum*1.2;
        cout<<$self;
    }
    return 0;
}
