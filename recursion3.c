#include<stdio.h>

 int a[100],i,n,min,max;

void max_min(int a[])
{

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
    printf("Maximum Value of array is %d\n",max);
    printf("Minimum Value of array is %d\n",min);
   
}


int main()
{

    printf("Enter size of array:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {       
            printf("a[%d] : ",i);
            scanf("%d",&a[i]);
    }

     max_min(a);
    
   
    return 0;
}