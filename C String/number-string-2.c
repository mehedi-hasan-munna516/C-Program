#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int i,capital,small,digit;
 printf("Enter a string :");
 gets(str);
 i=capital=small=digit=0;
 while(str[i]!='\0')
    {
       if(str[i]>=65 && str[i]<=90)
           capital++;
       if(str[i]>=97 && str[i]<=122)
           small++;
       if(str[i]>=48 && str[i]<=57)
           digit++;
        i++;      
    }

 printf("Number of capital letter = %d\n",capital);
 printf("Number of small letter = %d\n",small);
 printf("Number of digit = %d\n",digit);

 return 0;
}