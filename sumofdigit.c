#include<stdio.h>
int main()
{
	int n,sum=0,digit;
	printf("Enter a Number");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		sum+=digit;
		n=n/10;
	}
	printf("Sum of Digit is %d",sum);
}
