#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,s1=0,s2=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==122)
        {
            s1++;
            
        }
        else if(str[i]==111)
        {
            s2++;
        }
    }
    if(s1*2==s2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}