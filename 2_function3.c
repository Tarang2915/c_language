#include<stdio.h>

int coin(int n)
{
	int i,p;
	int a[]={25,10,5,2,1};
	

	for(i=0; i<5; i++)
	{
		
			p=n/a[i];
			printf("%d - %d\n",a[i],p);
			n=n%a[i];
		
	}
	
}

int main()
{
	int n,p,i;
	int a[]={25,10,5,2,1};

	printf("Enter amount :");
	scanf("%d",&n);
	
	coin(n);
}