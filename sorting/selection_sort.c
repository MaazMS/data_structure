/*  in this selction program compare first number with second number to last number . second time compare second number with third
    number to last number .similarly this step is repeat until last number .
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	setbuf(stdout,NULL);
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
		minimum=index;                                            //  store the index number of block array 
		for(sequence=index+1;sequence<number;sequence++)
		{
			if(block[sequence]<block[minimum])                // this is condition for ascending oeder of number 
			{
				minimum=sequence;                         // if find minimum  number then assign sequence number to minimum 
			}
			extra=block[index];                                // swpe number of block array 
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
/* OUTPUT
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
