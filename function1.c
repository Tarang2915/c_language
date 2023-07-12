#include<stdio.h>

void findbig()
{
	int n1,n2;

	printf("Enter Value n1 :");
	scanf("%d",&n1);

	printf("Enter Value n2 :");
	scanf("%d",&n2);

	if(n1>n2)
	{
		printf("%d is big",n1);
	}

	else
	{
		printf("%d is big",n2);
	}
}

int main()
{
	findbig();
}