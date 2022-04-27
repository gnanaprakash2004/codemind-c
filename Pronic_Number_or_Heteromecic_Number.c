#include<stdio.h>
int main()
{
    int n,m,i,c=0;
    scanf("%d",&n);
     
    for(i=2;i<n;i++)
    {
    if(i*(i+1)==n)
    {
        c=1;
        break;
    }
   
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
  //  printf("%d",c);
}