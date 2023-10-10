#include<stdio.h>
int main()
{
	int a,b,n=0;
	printf("Enter the values:\n");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		printf("value of a should be greater than b");
	}
	else
	{
		while(a>=b)
		{
			a=a-b;
			n++;
		}
		printf("Quotient is:  %d \nreminder is: %d ",n,a);
	}
	int x,y,i=0;
	printf("\nEnter the values:\n");
	scanf("%d %d",&x,&y);
	if(x<y)
	{
		printf("value of x should be greater than y");
	}
	else
	{
		while(x>=y)
		{
			x=x-y;
			i++;
		}
		printf("Quotient is:  %d \nreminder is: %d ",i,x);
	}
	return 0;
}
