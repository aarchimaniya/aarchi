#include<stdio.h>
#include<conio.h>
main()
{
       int x,y,z;
       clrscr();
       printf("enter the value of x:");
       scanf("%d" ,&x);
       printf("enter the value of y:");
       scanf("%d" ,&z);
       z=(x-y)*(x-y);
       printf("\nsum of %d",z);
       getch();
}