/*
 * The merge sort is use the technique divide and conquer method .
 * The first step to divide all the given number and separate individual number .
 * The second step to merge all the separate number using create  extra[] array  .
 * The third step is while loop use right recursive number and left recursive arrange is ascending/descending order .
 * if right recursive number more then left recursive number then use another while loop .
 * Again if  left recursive number more then right recursive number then use another while loop.
 * The last step to arrange all number form extra[] array to block[] array (main array ) .
 * Because the merging method work by another extra[] array  .
 * If not use the extra[] array then how manage the store value . eg. swap two number using another variable.   
 */


#include<stdio.h>


void sorting(int block[10],int start ,int end);					//Sorting the divide number

void merge(int block[10],int first,int haif,int upper_mid, int last);		//The given number is divide


int main ()
{

	setbuf(stdout,NULL);

	int block[30],index,number;


	printf("enter the number for declare array size ");
	scanf("%d",&number);


	for(index=0;index<number;index++)
	{

		scanf("%d",&block[index]);

	}


	sorting(block,0,number-1);


	printf("\n display the array \n ");
	for(index=0;index<number;index++)
	{

		printf("%d",block[index]);

	}


	return 0 ;


}


void sorting(int block[10],int start ,int end)			     //The given number is divide
{
		int mid;


		if(start<end)
		{

			mid=(start+end)/2;				// Divide number in two part

			sorting(block,start,mid);			//left recursion

			sorting(block,mid+1,end);			//right recursion

			merge(block,start,mid,mid+1,end);

		}

}


void merge(int block[10],int first,int haif,int upper_mid, int last)
{

		int extra[50],index,upper_back,sequence;


		index=first;
		upper_back=upper_mid;
		sequence=0;


		while (index<=haif && upper_back<=last)			// merging the divide number in ascending order .
		{

			if (block[index]<block[upper_back])
			{

				extra[sequence++]=block[index++];

			}
			else
			{

				extra[sequence++]=block[upper_back++];

			}

		}


		while(index<=haif)					//copy remaining elements of the first list
		{

			extra[sequence++]=block[index++];

		}


		while(upper_back<=last)					//copy remaining elements of the second list
		{
			
			extra[sequence++]=block[upper_back++];

		}



		for(index=first,upper_back=0;index<=last;index++,upper_back++)
		{

			// Arrange all number form array extra[] to array block[] in the proper range

			block[index]=extra[upper_back];


		}

}
/*
output
enter the number for declare array size 5
1
3
2
5
4

 display the array 
 12345
 
 */
