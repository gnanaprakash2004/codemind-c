#include<stdio.h>
int main()
{
    int arr1[100], n,c=0;
    int i=0, j, k;
    scanf("%d",&n);
    //printf("%d
",n);
    int t=n,arr[100],te;
    while(t>0)
    {
        arr[te]=t%10;
        t=t/10;
        te++;
    }
         for(i=0;i<te;i++)
        {
        //c=0;
             for(j=0;j<te;j++)
             {
            if (i!=j)
             {
		       if(arr[i]==arr[j])
              {
                 // printf("%d %d
",arr[i],arr[j]);
                 c++;
               }
               
             }
        }
        }
       
    if(c==0)
        {
          printf("Unique Number");
        }
        else
        {
            printf("Not Unique Number");
        }
}