#include<stdio.h>
int main()
{
    char str[100];
    int s,e,c=0,i;
    scanf("%[^
]s",str);
    scanf("%d%d",&s,&e);
    for(i=0;str[i]!=NULL;i++)
    {
        c=c+1;
    }
    for(i=s;i<=e;i++)
    {
        printf("%c",str[i]);
    }
}