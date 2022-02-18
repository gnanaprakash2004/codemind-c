#include<stdio.h>
int main()
{
    float W,L,B,C,P,total,R,Q;
    scanf("%f%f%f%f",&L,&B,&W,&C);
    P=(L-W-W)*(B-W-W);
    Q=L*B;
    R=Q-P;
    total=R*C;
    
   if(L>2*W && B>2*W)
   {
       printf("%.0f",total);
   }
   else
   {
       printf("Impossible");
   }
}