#include<stdio.h>

int main()
{
	char str[1000];
	int i;

	printf("Enter The String : ");
	scanf("%s",&str);

	for(i=0; str[i]!=0; ++i);

	printf("length: %d",i);

	return 0;
}