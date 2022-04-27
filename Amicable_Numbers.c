#include<stdio.h>
int main()
{
    int n,m,d1,d2,i;
    scanf("%d%d",&n,&m);
    d1=0;
    d2=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
        d1=d1+i;
        }
    }
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
        d2=d2+i;
        }
    }
    if((m==d1) && (n==d2))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    
}