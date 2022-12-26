#include<stdio.h>
int main()
{
    float x,y;
    printf("enter coordinates");
    scanf("%f%f",&x,&y);
    if(x>0 && y>0)
        printf("first quad");
    else if(x>0 && y<0)
[11:55 am, 26/12/2022] Mansi Class: printf("fourth quad");
    else if(x<0 && y>0)
        printf("second quad");
    else
        printf("third quad");
}
