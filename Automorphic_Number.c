#include<stdio.h>
int main()
{
      int temp,squ,count=1,n;
      scanf("%d",&n);

       temp=n;
       squ=n*n;
      while (n!=0)
     {
          count=count*10;
          n=n/10;
     }
      if(squ%count==temp) 
      {
           printf("Automorphic Number");
      }
      else
      {
          
           printf("Not an Automorphic Number");
      }
      return 0;
}