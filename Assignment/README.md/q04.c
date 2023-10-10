#include<stdio.h>
int main()
{
	int size,i,j;
	printf("Enter the size of array");
	scanf("%d",&size);
	int array[size][size];
	printf("Enter the elements of array");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d ",&array[i][j]);
		}
    }
    for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
    }
    for(i=0;i<size;i++)
    {
    	for(j=0;j<size;j++)
    	{
    		if(array[i]==array[j])
    		{
    			printf("symmetry\n");
			}
			else
			{
				printf("noot symmetry\n");
			}
	    }
	}
    return 0;
}
