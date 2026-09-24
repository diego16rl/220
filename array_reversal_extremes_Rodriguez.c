#include <stdio.h>
int main(){
	int array[8];
	int i=0;
	int start, end, temp;
	int min, max, min_idx, max_idx;
	for(i=0;i<8;i++)
	{
		printf("Enter number:");
		scanf("%d",&array[i]);
	}
	printf("Original order: ");
	for(i=0;i<8;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	start=0;
	end=7;
	while(start<end)
	{
		temp=array[start];
		array[start]=array[end];
		array[end]=temp;
		start++;
		end--;
	}
	printf("Reversed order: ");
	for(i=0;i<8;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	min=array[0];
	max=array[0];
	min_idx=0;
	max_idx=0;
	for(i=1;i<8;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
			min_idx=i;
		}
		if(array[i]>max)
		{
			max=array[i];
			max_idx=i;
		}
	}
	printf("Minimum: %d at index %d\n",min,min_idx);
	printf("maximum: %d at index %d\n",max,max_idx);
	return 0;
}
