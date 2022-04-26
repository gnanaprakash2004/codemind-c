#include<stdio.h>
#include<math.h>
double compoundInterest(double P, double T, double R)
{
   return P*(pow(1.0+(R/100.0), T));
}
int main()
{
   double p, r;
   double t;
   scanf("%lf%lf%lf", &p, &r, &t);
   printf("%.2lf", compoundInterest(p, t, r));
}