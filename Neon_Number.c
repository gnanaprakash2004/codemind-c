#include<stdio.h>
#include<math.h>
int main()

{
    int n,s,r,sum=0;
    scanf("%d",&n);
    s=pow(n,2);
    while(s>0)
    {
        r=s%10;
        sum+=r;
        s=s/10;
        
    }
    if(n==sum)
    {
        printf("Neon Number");
        
    }
    else
    {
        printf("Not Neon Number");
    }
}