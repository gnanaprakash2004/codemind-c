#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=0;
    int c=0;
    for(int i=0;i<n/2;i++)
    
        {
            min+=arr[i];
        }
    //printf("%d",min);
    for(int i=n/2;i<n;i++)
    {
        c+=arr[i];
    
    }
    
    printf("%d
%d",min,c);
   
}