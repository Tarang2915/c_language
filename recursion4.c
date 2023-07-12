#include<stdio.h>

int a[100],sum=0,n,i;

int inc()
{
    for(i=0; i<n; i++)
    {
        sum+=a[i];
    }

    return sum;

}

int main()
{   
    int ans;

    printf("Enter size of array:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {       
            printf("a[%d] : ",i);
            scanf("%d",&a[i]);
    }

    ans=inc();

    printf("Sum of array: %d",ans);

	return 0;
}