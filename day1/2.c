#include<stdio.h>
int main()
{
    int x,y,z,p;
    printf("enter three integers");
    scanf("%d%d%d",&x,&y,&z);
    p=(x>y && x>z)?x:(y>z)?y:z;
    printf("max is %d",p);
}
