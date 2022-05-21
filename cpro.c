#include<stdio.h>

int main(){
// Declaring Variables //
int multiplicant,totalmultiply,multiply = 1;


// Taking input as well as giving output //
printf("Which Multiplication table do you want to view.\n");
scanf("%d",&multiplicant);
printf("Enter total Number of Multiply\n");
scanf("%d",&totalmultiply);
printf("Multiplication of %d\n\n",multiplicant);


// Using Do while Loops to print and count multiply //
do{
	int equation = multiplicant * multiply;
	printf("%d * %d = %d\n",multiplicant,multiply,equation);
	multiply++;
}while(multiply<=totalmultiply);


// Code By Bikal Thapa //
	return 0;
}
