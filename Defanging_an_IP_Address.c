#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[0-9,.]s",str);
    int i;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    
}