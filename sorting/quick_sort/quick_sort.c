/*
 * The quick sort use the technique to divide the array in two part left side and right side and set the middle number .
 * The left side and right side array may be sorted order or not . 
 * 
 *  
 * The middle number find by using pivot number . 
 * 
 * step  1 : Check if next number of pivot is smaller then pivot number and  end number in the array is smaller then pivot number . 
 *           Then no interchange the number .
 *           
 * step  2 : Check if next number of pivot is grater then pivot number and  end number in the array is smaller then pivot number . 
 *           Then  interchange the number .
 *           
 * step  3 : Check if next number of pivot is smaller then pivot number and  end number in the array is greater then pivot number . 
 *           Then no interchange the number .  
 *                  
 * step  4  : step 1,2 and 3 repeat until to find the one number which right side all number is greater and left side is smaller accept
 *            the pivot number .That number compare by pivot number if it's smaller then pivot number then swap otherwise not swap .
 *            
 * step  5  :  Use call by recursion technique to sorting left side or right side array .          
 * 
 */

#include<stdio.h>


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
			
			while(pivot>block[index])       
			{
				 // Find greater then pivot number then stop and execute another while loop .
				
				index++;
				
			}
			
			while(pivot<block[sequence])	
			{
				// Find the smallest number to pivot number then it's stop . 
				
				sequence--;
				
			}
			
			if(index<=sequence)
			{
				// If find the left partion number is less then and equal then swap the number .
				
				extra=index;
				index=sequence;
				sequence=extra;
				
			}
			
		}
		
		block[first]=block[sequence];  //  middle number is assign in first position .
		
		block[sequence]=pivot;   	// pivot assign  to middle number of array .  
		
		quick(block,first,sequence-1);	//  Left side of recursion
		
		quick(block,sequence+1,end);    // Right side of recursion 
		
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
