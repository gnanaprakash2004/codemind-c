#include<stdio.h>
int main()
{
    int Y;
    scanf("%d",&Y);
    if(Y%400==0)
    {
        printf("True",Y);
    }
    else if(Y%100==0)
    {
        printf("False",Y);
    }
    else if(Y%4==0)
    {
        printf("True",Y);
    }
    else
    {
        printf("False",Y);
    }
    return 0;
}