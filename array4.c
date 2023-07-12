#include<stdio.h>

int main()
{
	int num,odd_sum = 0,even_sum = 0,i;

	printf("Enter Value of num:\n");
	scanf("%d ",&num);

	for(i = 0; i <=num; i++)
	{
		if(i % 2 == 0)
		{
			even_sum = even_sum + i;
			printf("even number = %d\t",i);
			printf("\n");
		}
		else
		{
			odd_sum = odd_sum + i;
			printf("odd number = %d\t",i);
			
		}
	}
	printf("Sum of even numbers = %d\n ",even_sum);
	printf("Sum of odd numbers = %d\n ",odd_sum);

	return 0;
}