#include<stdio.h>

int main()
{
	char a[30];
	int i,j;

	printf("Enter Name : ");
	scanf("%s",&a);

	for( i=0; a[i]!='\0'; i++);

	for(j=0; j<=a[i]; j++)
	{
		for(i=0; i<=j; i++)
		{
			printf("%c ",a[i]);
		}
		printf("\n");
	}

	
		
	return 0;
}