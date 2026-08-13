#include<stdio.h>
#include<conio.h>

void main()
{
	float x,y,z;
	clrscr();
	printf("\n enter the value of number");
	scanf("%d%d%d",&x,&y,&z);

	if(x>y)
	{
	printf("x is maximum",x);


	printf("z is maximum",z);
	}
	else
	{
		if(y>z)
			printf("y is maximum",y);
		else
			printf("z is maximum",z);
	}
	getch();
}