#include<stdio.h>
int main()
{
    int r,c,i,j,max=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        int s=0;
        for(j=0;j<r;j++)
        {
            s+=a[j][i];
        }
        if(max<s)
        {
            max=s;
        }
    }
    printf("%d",max);
}