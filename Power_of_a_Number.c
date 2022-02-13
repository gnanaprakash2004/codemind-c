#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n,m,o;
    scanf("%d%d%d",&x,&y,&n);
    m=pow(x,y);
    o=m%n;
    printf("%d",o);
    
}