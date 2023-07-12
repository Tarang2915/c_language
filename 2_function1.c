#include<stdio.h>

int reverse(int n)
{
	int  rev = 0, rem;

	while(n>0)
	{
		rem = n %  10;
		rev = rev * 10 + rem;
		n = n / 10;
	}

	return rev;
}

int main()
{
	int n,a;

	printf("Enter Number : ");
	scanf("%d",&n);

	a=reverse(n);
	printf("Reverse Number :%d",a);
	
	return 0;
}