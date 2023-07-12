#include<stdio.h>

int main()
{
	float student[5],marks[3],i,total,per;

	for(i=0; i<5; i++)
	{
		printf("student[%.0f]\n",i+1);

		printf("Enter marks of 3 subjects:\n");
		scanf("%f",&marks[0]);
		scanf("%f",&marks[1]);
		scanf("%f",&marks[2]);

		total = marks[0] + marks[1] + marks[2];
		printf("total = %f\n",total);

		per = total/3;
		printf("per = %f\n",per);
		
		if(per>=90 && per<100)
		{
			printf("Your Grade is A");
		}

		else if(per>=70&& per<90)
		{
			printf("Your Grade is B");
		}

		else if(per>=33 && per<70)
		{
			printf("Your Grade is C");
		}

		else
		{
			printf("You are Failed");
		}

		printf("\n\n");

	}
}