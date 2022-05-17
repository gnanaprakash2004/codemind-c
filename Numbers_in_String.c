#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,c=0,sum=0,j;
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    for(i=0;i<c;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            sum=sum+(str[i]-48);
        }
        
    }
   
    printf("%d",sum);
}