#include<stdio.h>
int main()
{
    float t;
    printf("enter temperature in centigrade");
    scanf("%f",&t);
    if(t<0)
        printf("freezing weather");
    else if(t>=0 && t<10)
        printf("very cold weather");
    else if(t>=10 && t<20)
        printf("cold weather");
    else if(t>=20 && t<30)
        printf("normal in temperature");
    else if(t>=30 && t<40)
        printf("hot");
    else if(t>=40)
        printf("very hot");
}
