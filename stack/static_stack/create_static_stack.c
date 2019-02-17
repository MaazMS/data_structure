#include<stdio.h>
# define capacity 25				//  pre-process macro

struct stack						// create structure
{

	int data[capacity];				/* variable size pass integer number not pass variable  but here pass macro variable.
	 	 	 	 	 	 	 	         	 	because at time of pre-processing the value is substitute form macro variable */
	int top;

};


void initial(struct stack *pointer)
{

	pointer->top=-1;					// initially stack is start form -1 because it's not pointing any one

}



void push (struct stack * pointer , int no)     // add one number in satck at time  until stack in not full
{

	if(pointer->top==capacity-1)
	{
		printf("stack is overflow");

	}

	else
	{
		pointer->top++;
		pointer->data[pointer->top]=no;

	}

}



int pop(struct stack *pointer)  // Remove one number at time until stack in not empty
{
	int lifo;


	if(pointer->top== -1)
	{

		printf("stack is underflow");
		return 0;

	}

	else
	{

		lifo=pointer->data[pointer->top];
		pointer->data[pointer->top]=0;
		pointer->top--;
		return lifo ;

	}

}


void display(struct stack pointer)    // Display numbers in stack
{
	int index;


	for(index=0;index<=pointer.top;index++)
	{

		printf("stack number =:	%d\n",pointer.data[index]);

	}

}


int main()
{
	
	struct stack s;       // structure variable " s " .
	int ch,no;


	initial(&s);


	while(1)
	{

		printf("1.push  \n ");
		printf("2.pop   \n");
		printf("3.display \n");
		printf("4.quit \n ");

		printf("enter your choice ");
		scanf("%d",&ch);

			switch(ch)
			{
				case 1:

					printf("enter the number for push data in stack ");
					scanf("%d",&no);
					push(&s,no);
					break ;

				case 2:

					no=pop(&s);
					if(no==0)
					{

						printf("stack is underflow\n");

					}

					else
					{

						printf ("popped element is = %d \n", no);

					}

					break ;

				case 3:

					display(s);
					break ;

				case 4:

					exit(0);

				default : printf(" invalid input");

			}

		}
	return 0 ;

}
/*

OUTPUT
1.push  
 2.pop   
3.display 
4.quit 
 enter your choice 1
enter the number for push data in stack 12
1.push  
 2.pop   
3.display 
4.quit 
 enter your choice 3
stack number =:	12
1.push  
 2.pop   
3.display 
4.quit 
 enter your choice 2
popped element is = 12

*/
