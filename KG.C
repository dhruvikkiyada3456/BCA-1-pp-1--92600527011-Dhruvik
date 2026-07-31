#include<stdio.h>

int main()

{
	float kg;
	clrscr();
	printf("enter mass in kilograms: ");
	scanf("%f",&kg);
	printf("\nMass in grams: %f",kg*1000);
	getch();

}