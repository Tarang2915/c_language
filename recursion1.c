#include<stdio.h>

int fibonacci(int a,int b,int n)
{
    int sum;

    if(n!=0)
    {
        sum = a + b;
        a = b;
        b = sum;

        n--;

        printf("%d ",sum);
        return fibonacci(a,b,n);

    }

}

int main()
{
    int n,i,b = 1,a = -1;

    printf("Enter terms :");
    scanf("%d",&n);

    fibonacci(a,b,n);

    return 0;
  
}