/*
 *  The insertion sort select the one number and compare to previous number  and again compare second previous number until
 *  the condition is not false.If number condition true then swap number.But also compare the first position of number to
 *  current selected  number .
 */


#include<stdio.h>


int main()

{
	int block[15],index,sequence,extra,number;


	printf("enter the number for size of block\n");
	scanf("%d",&number);


	printf("enter the number in block of array\n");
	for(index=0;index<number;index++)
	{

		scanf("%d",&block[index]);

	}


	printf("\n display the block array number before insertion sort \n");
	for(index=0;index<number;index++)
	{

		printf("%d",block[index]);

	}


	printf(" \n Apply insertion sort of block array \n ");


//The index start form one ( 1 ) .Because I compare next number with previous number which is Zero ( 0 ) .


	for(index=1;index<number;index++)       // This for loop for next numbers
	{

		extra=block[index];		// Assign the value of index position .



// This for loop is decrement which is using for previous number


		for(sequence=index;sequence>0 && extra<block[sequence-1];sequence--)

		{

		 	block[sequence]=block[sequence-1];	// Next number is assign by previous number

		}

		block[sequence]=extra;		// Previous number is assign by next number which is store is extra variable
	}


	for(index=0;index<number;index++)
	{


		printf("%d",block[index]);

	}

	return 0 ;
}

/* OUTPUT
  
enter the number for size of block
3
enter the number in block of array
3
1
2

 display the block array number before insertion sort 
312 
 Apply insertion sort of block array 
 123
 
*/
