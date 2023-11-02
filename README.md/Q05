#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,j,k,max,count=0;
	printf("Enter a number\n");
	max=pow(num,3);
	for(i=1729;i<=max;i++)
	{
		for(j=1;j<cbrt(i);j++)
		{
			for(k=j+1;k<=cbrt(i);k++)
			{
				if(pow(j,3)+pow(k,3)==i)
				{
					count+=1;
				}
			}
		}
		if(count==2)
		{
			printf("%d",i);
		}
	}
	return 0;
}
