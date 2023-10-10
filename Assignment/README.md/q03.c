#include<stdio.h>
int main()
{
	int sum=0,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		sum=sum+(n%10);
		n=(n/10);
	}
	printf("sum is: %d",sum);
	return 0;
} 
