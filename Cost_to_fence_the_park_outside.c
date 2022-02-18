#include<stdio.h>
int main()
{
    int W,L,B,C,P,total,R,Q;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    P=(L+W+W)*(B+W+W);
    Q=L*B;
    R=P-Q;
    total=R*C;
    printf("%d",total);
    
}