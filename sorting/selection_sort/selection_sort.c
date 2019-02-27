/*
 * The selection sort is select first number and compare to second number,third number until the last number .
 * But they find the small number then smallest number is compare to next number until the last number .
 * This process is repeat again and again to find smallest number to first position . 
 * This is the first for loop iteration  .
 * The same process is repeat to sort all the number .
 */



#include<stdio.h>

int main()
{

	
	int block[10],index,sequence,extra,number,minimum;


	printf(" enter the number for size of array \n");
	scanf("%d",&number);


	printf("\n enter the number in block array \n");
	for(index=0;index<number;index++)
	{
		scanf("%d",&block[index]);
	}


	printf("\n display the number in block array \n");
	for(index=0;index<number;index++)
	{
		printf("%d",block[index]);
	}


	printf("\n apply selection sort in block array \n");
	for(index=0;index<number-1;index++)
	{

		/*
		 * 	  At a time one number is enter in the for loop . That number is check by next number until last number.
	         * 	  if find the smallest number then it assign by the variable name minimum .
		 * 	  if find another smallest number then again it assign by variable name minimum .
		 * 	  This process until the loop condition is not false .
		 */
		

		                 minimum=index;                           // store the index number of block array

		for(sequence=index+1;sequence<number;sequence++)
		{

			if(block[sequence]<block[minimum])
			{

				minimum=sequence;                     // The minimum  number assign by the variable name minimum
			}

			// swap number in  block of  array through extra variable

			extra=block[index];
			block[index]=block[minimum];
			block[minimum]=extra;

		}

	}
	
	
	for(index=0;index<number;index++)
	{
		printf("%d",block[index]);
	}
	
	
	return 0 ;
}

/* 
OUTPUT
enter the number for size of array 
5
 enter the number in block array 
1
3
2
5
4

 display the number in block array 
13254
 apply selection sort in block array 
12345

*/
