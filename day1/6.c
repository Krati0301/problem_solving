#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter sides of triangle");
    scanf("%d%d%d",&x,&y,&z);
    if(x==y && y==z)
        printf("equilateral");
    else if(x==y || y==z || z==x)
        printf("isosceles");
    else
        printf("scalene");
}
