#include<stdio.h>
#include<math.h>
int main()
{

 double a,b,c;

scanf("%lf",&a);

 b = trunc(a); c = ((a - b)*1000);

 printf("%.lf.%.lf",c,b);

return 0;
}