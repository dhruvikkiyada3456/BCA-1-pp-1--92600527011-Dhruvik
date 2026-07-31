#include<stdio.h>
void main()
{
	float m1,m2,m3,m4,m5,total;
	clrscr();
	printf("\nEnter marks 1 out of 100:");
	scanf("%f",&m1);
	printf("\nEnter marks 2 out of 100:");
	scanf("%f",&m2);
	printf("\nEnter marks 3 out of 100:");
	scanf("%f",&m3);
	printf("\nEnter marks 4 out of 100:");
	scanf("%f",&m4);
	printf("\nEnter marks 5 out of 100:");
	scanf("%f",&m5);
	total=m1+m2+m3+m4+m5;
	printf("\nTotal marks: %f",total);
	printf("\nPercentage: %f",(total/500)*100);
	getch();

}