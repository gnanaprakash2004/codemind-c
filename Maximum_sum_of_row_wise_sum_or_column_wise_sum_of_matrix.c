#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b],i,j;
    for (i=0; i<a; i++)
    {
        for (j=0; j<b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int rs=0,max=0;
    for (i=0; i<a; i++)
    {
        rs=0;
        for (j=0;j<b;j++)
        {
            rs+=arr[i][j];
        }
        if (rs>max)
        {
            max=rs;
        }
    }
    int cs=0,max1=0;
    for (j=0; j<b; j++)
    {
        cs=0;
        for (i=0;i<a;i++)
        {
            cs+=arr[i][j];
        }
        if (cs>max1)
        {
            max1=cs;
        }
    }
    if(max1>max)
    {
    printf("%d",max1);
    }
    else
    {
        printf("%d",max);
    }
    return 0;
}