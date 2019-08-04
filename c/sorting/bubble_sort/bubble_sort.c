/*  
*  Bubble sort to compare pair of adjacent number . if adjacent number in wrong order then swap number.
*  It sorting number for assending order or decensing order .
*/


#include<stdlib.h>


int main()
{
	
	int block[10],index,extra,sequence,number;
	
	
	printf("enter number for size of the array ");
	scanf("%d",&number);
	
	for(index=0;index<number;index++) 
	{
		
		scanf("%d",&block[index]);
		
	}
	
	
	printf("\n display  array elements ");
	for(index=0;index<number;index++)
	{
		
	   printf("%d",block[index]);
		
	}

	
	printf("\n apply bubble sort for array elements");
	for(index=0;index<number-1;index++)	
		/*
		 For first loop initialization and condition is index=0 and number<-1.Example 1,2,3,4,5 
		 I  compare first number to second number,second number compare with third number, third number compare with fourth number,
		 fourth number compare with fifth number. There for total comparison is number-1.
	 	 */
	{
		
		for(sequence=0;sequence<number-1-index;sequence++)		
			/* 
			 * 	The for loop first iteration to find the largest number at right position ..
			 * 	Not compare the right position number again and again use condition
			 *	"number-1-index " in for loop  
		 	 */
			{
				if(block[sequence]>block[sequence+1])
				{
					
					extra=block[sequence];
					block[sequence]=block[sequence+1];		////swap two number
					block[sequence+1]=extra;
				}
			}
	}
	
	
	printf("\n after apply bubble sort for array elements");
	for(index=0;index<number;index++)
	{	
		
	   printf("%d",block[index]);
		
	}
	
	
	return 0 ;
}

/*
OUTPUR
display  array elements 13254
 apply bubble sort for array elements
 after apply bubble sort for array elements12345
 
 */
