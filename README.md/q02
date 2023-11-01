#include<stdio.h>
int main()
{
	int num1,num2,i,j;
	printf("Enter number of rows and coloumns of array: \n");
	scanf("%d %d",&num1,&num2);
	char maze[num1][num2];
	printf("Enter 'W' for walls, 'O' for open paths, 'S' for start, 'E' for exit: \n");
	for(i=0;i<num1;i++)
	{
		for(j=0;j<num2;j++)
		{
			printf("Maze[%d][%d]: ",i,j);
			scanf("%c",&maze[i][j]);
		}
		printf("\n");
	}
	printf("Maze you entered is: \n");
	for(i=0;i<num1;i++)
	{
		for(j=0;j<num2;j++)
		{
			printf("%c",maze[i][j]);
		}
		printf("\n");
	}
	int start,end,current_start,current_end;
	for(i=0;i<num1;i++)
	{
		for(j=0;j<num2;j++)
		{
			if(maze[i][j]=='S')
			{
				start=i;
				end=j;
				break;
			}
		}
	}
	current_start=start;
	current_end=end;
	printf("this is tranversal maze: \n");
	while(maze[current_start][current_end]!='E')
	{
		printf("%d , %d",current_start,current_end);
		if(current_start<num1-1 && maze[current_start+1][current_end]!='W')
		{
			current_end++;
		}
		else
		{
			printf("Transversial maze did not found\n");
		}
	}
	printf("%d , %d",current_start,current_end);
	return 0;
}
