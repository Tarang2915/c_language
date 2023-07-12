#include<stdio.h>

int main()
{
	char a[50],b[50];
	int i,j=0;

	printf("Enter Word : ");
	scanf("%s",&a);

	for(i=0; a[i]!='\0'; i++);

	for(a[i]='\0'-1; i>=0; i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	printf("Reverse Word : %s",b);

	return 0;
}