#include<stdio.h>
#include<conio.h>

void main()
{
	float num1,num2;
	clrscr();/*clears tha output screen*/

	printf("enter two numbers:");
	scanf("%f%f",&num1,&num2);

	if(num1 > num2){
	 printf("maximum value is:%.2f\n",num1);
	 }
	 else if (num2 >num1){
	  printf("maximum value is:%.2f\n",num2);
	  }
	  else{
	   printf("both numbers are equal.\n");
	   }
	   getch();/*holds tha screen until a key is pressed*/

}