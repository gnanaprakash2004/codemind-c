#include<stdio.h>
int main()
{
    int i,n,s,flag=0,index;
    scanf("%d",&n);
    int t,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            flag=1;
            index=i;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("%d",index);
    }
    else
    {
        printf("%d",-1);
    }
    return 0;
}