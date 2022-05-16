#include<stdio.h>
int main()
{
    int m,n,sum=0;
    scanf("%d%d",&m,&n);
    int a[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            
            sum+=a[i][j];
            
        }
    }
    printf("%d",sum);
}