/* In this program the x=10 and y=20 and then create pointer variable a. The address of x variable is store in pointer a and 
y=*a mean value is assign in y. But in *a there is no value is store baseus *a is store the address of x variable. The x=10 then y=10 */ 
#include<conio.h>
#include<stdio.h>
void main()
{
	int x=10;
	int y=20;
	int *a;
	a=&x;
  y=*a;
  clrscr();
	printf("Give the value of x is :  %d\t\n",x);
  printf("Give the address of x which is store in pointer a variable is : %d\t\n",a);
  printf("Give address of value which is store in pointer variable  is : %d\t\n",y);
  getch();
 }
 /* OUTPUT
 Give the value of x is : 10
 Give the address of x which is store in pointer a variable is :  -12
 Give address of value which is store in pointer variable is   :  10
 */
