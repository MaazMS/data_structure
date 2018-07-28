/* The pointer is use to store the address of another variable.The operator which is use to define pointer variable is called as 
 indirection  or dereference operator.The pointer symbol is * .
 In this program has two variable. The address of x variable which is store in pointer a variable.  */
#include<conio.h>
#include<stdio.h>
void main()
{
	int x=10;
	int *a;
  a=&x;
  clrscr();
	printf("Give the value of x is : %d\t\n",x);
	printf("Give the address of x which is store in pointer a variable is : %d\t\n",a);
  getch();
  }
  /*   OUTPUT
  Give the value of x is :    10
  Give the address of x which is store in pointer a variable is :   -12 
  */
