#include<stdio.h>
int main()
{
    int i,N,c=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        
    }
    int z;
    scanf("%d",&z);
    for(i=0;i<N;i++)
    {
        if(a[i]==z)
        {
            c++;
        }
        
    }
    printf("%d",c);
}