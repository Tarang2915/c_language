#include<stdio.h>

int main()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9},Upper_sum=0;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++ )
		{
			printf("%d ",a[i][j]);

			if(j>i)
			{
				Upper_sum+=a[i][j];
			}
		}
		printf("\n");
	}

	

	printf("Upper sum= %d ",Upper_sum);

	return 0;
}