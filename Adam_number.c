#include<stdio.h>
int main()
{
   int  n,i,r,j,temp,rev=0;
   scanf("%d",&n);
   i=n*n;
   temp=n;
   while(temp>0)
   {
       r=temp%10;
       rev=rev*10+r;
       temp=temp/10;
    }
    
 j=rev*rev;
 int x,y,rev1,temp1;
 temp1=j;
 while(temp1>0)
 {
     x=temp1%10;
     rev1=rev1*10+x;
     temp1=temp1/10;
     
 }
 if(rev1==i)
 {
     printf("True");
 }
 else{
     printf("False");
 }
 
}
