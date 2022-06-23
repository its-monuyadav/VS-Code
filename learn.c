//  Find greatest of three numbers using nested if else statement
#include<conio.h>
#include<stdio.h>
 int main()
{
      int a,b,c;
      printf("Enter first number: ");
      scanf("%d",&a);
      printf("Enter second number: ");
      scanf("%d",&b);
      printf("Enter third number: ");
      scanf("%d",&c);   
         if(a>b)
            {
                     if(a>c)
                     {
                      printf("%d is biggest number",a);
                     }
                      else
                     {
                        printf("%d is biggest number",c);
                     }
           }       
      else
      {
                     if(b>c)
                     {
                     printf("%d is biggest number",b);
                     }
                     else
                     {
                     printf("%d is biggest number",c); 
                     }
      }
      return 0;
      }