#include<stdio.h>


void init();
void push(int no);
int pop();
void display();


struct node
{
	int data;						      // data is member of stack
	struct node *next;				// its member of stack with data type of structure

};

 struct node * top;


int main()
{
	
	int number,choice;

	init();

	while(1)
	{

		printf("\n 1: push number \n");
		printf("\n 2: pop number \n");
		printf("\n 3: display number \n");
		printf("\n 4: exit \n");

		printf("enter your choice");
		scanf("%d",&choice);

		switch(choice)
		{

		case 1: printf("enter your number");				// user enter the value
				scanf("%d",&number);
				push(number);
				break;

		case 2: number=pop();									//user remove the value
				printf("Remove no is = %d",number);
				break;

		case 3:	printf("Display the stack number");
				display();
				break;

		case 4: exit(0);



		}
	}

	return 0 ;
}


void init()
{
	top=NULL;
}


void push(int no)
{
	struct node *temporary;


	if(top==NULL)			// if stack is empty then allocate memory using top variable and store the data in top variable
	{

		top=malloc(sizeof(struct node));
		top->data=no;
		top->next=NULL;

	}

	else			// if stack is not empty then allocate memory using temporary variable and store the data in temporary variable
	{
		temporary=malloc(sizeof(struct node));
		temporary->data=no;
		temporary->next=top;
		top=temporary;
	}
}


int pop()
{

	struct node *temporary;
	int c;

	if(top==NULL)
	{

		printf("stack is underflow");
		return 0;
	}

	else                // if stack is not empty then using temporary variable remove data is store in  temporary variable
	{

		temporary=top;
		top=top->next;

		c=temporary->data;
		free(temporary);

		return c;
	}

}


void display()
{
  
 /*
 *  // if  top is not assign the variable temporary and using top print the value than the top loss the some data 
 *  for example  user 23,34,25,26 and print the result is 25,26 
 */
	struct node *temporary;

	temporary=top;                 
	while(temporary!=NULL)
	{

		printf("\n display no= :%d",temporary->data);
		temporary=temporary->next;
	}

}
/*
 * OUTPUT

 1: push number

 2: pop number

 3: display number

 4: exit
enter your choice1
enter your number25

 1: push number

 2: pop number

 3: display number

 4: exit
enter your choice1
enter your number26

 1: push number

 2: pop number

 3: display number

 4: exit
enter your choice3
Display the stack number
 display no= :26
 display no= :25
 1: push number

 2: pop number

 3: display number

 4: exit
enter your choice2
Remove no is = 26
 1: push number

 2: pop number

 3: display number

 4: exit
enter your choice
 */
