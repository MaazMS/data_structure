#include<stdio.h>
#include<stdlib.h>

void quick(int block[],int first,int end );
int main ()

{
	int block[30],index,number;
	printf("\n  enter the number of array size \n ");
	scanf("%d",&number);
	printf("\n enter the number in array \n");
	for(index=0;index<number;index++)
	{
		scanf("%d",&block[index]);
	}
	quick(block,0,number-1);
	printf("\n display array number in sorting order");
	for(index=0;index<number;index++)
	{
		printf("%d",block[index]);
	}
	return 0 ;
}
void  quick(int block[],int first,int end )
{
	int pivot,index,sequence,extra;

	if(first<=end)
	{
		pivot=block[first];
		index=first+1;
		sequence=end;

		while(index<=sequence)
		{
			while(pivot>block[index])        // find greater then pivot number then stop . this greater number give to index 
			{
				index++;
			}
			while(pivot<block[sequence])	// find less then pivot number then stop . this less number give to index 
			{
				sequence--;
			}
			if(index<=sequence)
			{
				extra=index;
				index=sequence;
				sequence=extra;
			}
		}
		block[first]=block[sequence]; 		//  middle number is assign in first position .
		block[sequence]=pivot;				// pivot assign  to middle number of array  
		quick(block,first,sequence-1);		
		quick(block,sequence+1,end);
	}
}
/*
output
 enter the number of array size 
 5

 enter the number in array 
1
3
2
5
4

 display array number in sorting order12345 
 */
