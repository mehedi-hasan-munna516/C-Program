#include<stdio.h>
int main()
{
 int num1[100],num2[100],i,n;
 printf("How many numbers :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
    {
        scanf("%d",&num1[i]);
    }
   printf("Array 1 : "); 
  for(i=0;i<n;i++)
    {
        printf("%d  ",num1[i]);
    }
 for(i=0;i<n;i++)
    {
        num2[i]=num1[i];
    }  
   printf("\nArray 2 : "); 
  for(i=0;i<n;i++)
    {
        printf("%d  ",num2[i]);
    } 

 return 0;

} 