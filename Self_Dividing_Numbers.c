#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        int temp=i,c=0,co=0,r;
        while(temp>0)
        {
            r=temp%10;
            co++;
            if(r==0)
            {
                break;
            }
            else if(i%r==0)
            {
                c+=1;
            }
            temp=temp/10;
        }
        if(c==co)
        {
            printf("%d ",i);
        }
    }
    
}