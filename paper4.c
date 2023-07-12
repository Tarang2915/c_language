#include<stdio.h>

int main()
{
	int a[100],i,n,min,max;
	
	printf("Enter size of array : ");
	scanf("%d",&n);

	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}

	min=a[0];
	max=a[0];

	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}

	printf("Minimum element  of array is : %d\n",min);
	printf("Maximum element  of array is : %d",max);

	return 0;
}