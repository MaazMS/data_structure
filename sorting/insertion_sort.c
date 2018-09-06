/* In this program select the one number and compare to previous number  and again compare second previous number until the condition 
 is not false. . if number condtion true then swpe number but also compare the first position of number to current selected  number * / 
#include<stdio.h>
#include<stdlib.h>

int main()

{
	int block[15],index,sequence,extra,number;
	printf("enter the number for size of block");
	scanf("%d",&number);

	for(index=0;index<number;index++)
	{
		scanf("%d",&block[index]);
	}
	printf("\n display the block array number \t");
	for(index=0;index<number;index++)
	{
		printf("%d",block[index]);
	}
	printf(" \n Apply insertion sort of block array \n ");
	for(index=1;index<number;index++)
	{
		extra=block[index];														// assign the number of index position .
		for(sequence=index;sequence>0 && extra<block[sequence-1];sequence --)   /* loop is decrement to compare previous number .
																				if condition is false the go out of bracket	*/
		{
			block[sequence]=block[sequence-1];								   
		}
		block[sequence]=extra;													
	}
	for(index=0;index<number;index++)
	{
		printf("%d",block[index]);
	}
	return 0 ;
}

/* OUTPUT
enter the number for size of block6
1
3
2
5
4
7

 display the block array number 	132547 
 Apply insertion sort of block array 
 123457 
 */
