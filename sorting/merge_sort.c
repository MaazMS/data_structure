#include<stdio.h>
#include<stdlib.h>

void sorting(int block[10],int start ,int end);                           // divide array 
void merge(int block[10],int first,int haif,int upper_mid, int last);     // conqure 


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
void sorting(int block[10],int start ,int end)
{
		int mid;
		if(start<end)
		{
			mid=(start+end)/2;
			sorting(block,start,mid);					//left recursion
			sorting(block,mid+1,end);					//right recursion
			merge(block,start,mid,mid+1,end);			//merging of two sorted sub-arrays
		}

}
void merge(int block[10],int first,int haif,int upper_mid, int last)
{
		int extra[50],index,upper_back,sequence;
		index=first;
		upper_back=upper_mid;
		sequence=0;
		while (index<=haif && upper_back<=last)
		{

			if (block[index]<block[upper_back])
			{
				extra[sequence++]=block[index++];
				//sequence++;
				//index++;
			}
			else
			{
				extra[sequence++]=block[upper_back++];
				//sequence++;
				//upper_back++;
			}
		}
		while(index<=haif)								//copy remaining elements of the first list
		{
			extra[sequence++]=block[index++];
			//sequence++;
			//index++;
		}
		while(upper_back<=last)							 //copy remaining elements of the second list
		{
			extra[sequence++]=block[upper_back++];
			//sequence++;
			//upper_back++;
		}
		for(index=first,upper_back=0;index<=last;index++,upper_back++)
		{
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
