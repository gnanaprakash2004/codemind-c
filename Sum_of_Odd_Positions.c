#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i=i+2)
    {
        sum+=a[i];
    
    }
    printf("%d",sum);
}