#include<stdio.h>
int main()
{
    int n,i=0, r,arr[i],dc=0,temp,ec=0,oc=0;
    scanf("%d",&n);
    temp=n;
    i=0;
    while(temp>0)
    {
        r=temp%10;
        dc++;
        arr[i]=r;
        i++;
        temp=temp/10;
       
    
    }
    
    for(i=0;i<dc;i++)
    {
    if(arr[i]%2==0)
    {
        ec++;
    }
    else
    {
        oc++;
    }
    }
    if(ec==0)
    {
        printf("Odd");
    }
    else if(oc==0)
    {
        printf("Even");
        
    }
    else 
    {
        printf("Mixed");
    }
    
}