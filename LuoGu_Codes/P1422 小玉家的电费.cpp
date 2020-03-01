#include<iostream>
using namespace std;
int main()
{
    int ele;
    float $=0;
    cin>>ele;
    //ele=267;
    if(ele<=150)
    {
        $=ele*0.4463;
    }
    else if(ele<=400)
    {
        $=150*0.4463+(ele-150)*0.4663;
    }
    else
    {
        $=150*0.4463+250*0.4663+(ele-400)*0.5663;
    }
    printf("%.1f",$);
    return 0;
}
