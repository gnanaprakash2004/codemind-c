#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C;
    double s,area;
    scanf("%f%f%f",&A,&B,&C);
   s=(A+B+C)/2;
   area=sqrt(s*(s-A)*(s-B)*(s-C));
   printf("%.2lf",area);
}