/*  
*  Bubble sort to compare pair of adjacent number . if adjacent number in wroung order then swape number.
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
	{
		
		for(sequence=0;sequence<number-1-index;sequence++)		
			/* 
			 * number-1 is use for first iteration to find the largest number at right position .
			 * number-1-index is use for not compare last number again and again  
		 	*/
			{
				if(block[sequence]>block[sequence+1])
				{
					
					extra=block[sequence];
					block[sequence]=block[sequence+1];
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
