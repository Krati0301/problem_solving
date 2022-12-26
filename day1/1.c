#include<stdio.h>
int main()
{
    float hra,da,pf,allow;
    int ts,bs;
    char g;
    printf("enter grade");
    scanf("%c",&g);
    printf("enter basic salary");
    scanf("%d",&bs);

    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    if(g=='A')
        allow=1700;
    else if(g=='B')
        allow=1500;
    else
        allow=1300;
    ts=bs+hra+da+allow-pf;

    printf("%d\n",ts);

}
