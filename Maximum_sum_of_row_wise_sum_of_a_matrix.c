#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    int a[m][n],sum=0,i,j,res=0,diff=0,v;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        v=0;
        for(j=0;j<n;j++)
        {
            v+=a[i][j];
        }
        if(v>diff)
        {
            diff=v;
        }
    }
    printf("%d",diff);
}