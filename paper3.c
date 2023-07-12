#include<stdio.h>

int main()
{
	int n, n1, rev = 0, rem;

	printf("Enter Number : ");
	scanf("%d",&n);

	n1 = n;

	while(n>0)
	{
		rem = n %  10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	
	printf("\nReverse Number : %d",rev);
	
	if(n1 == rev)
	{
		printf("\nNumber is pelindrome");
	}
	else
	{
		printf("\nNumber is not pelindrome");
	}
	
	return 0;
}