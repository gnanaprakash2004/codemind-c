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
    int a;
    scanf("%d%d",&a);
    int min=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            min+=arr[i];
        }
        else
        {
            break;
        }
    }
    printf("%d",min);
   
}