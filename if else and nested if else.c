#include<stdio.h>
main ()

{
	int marks;
printf("Enter the marks that the stuent got :\n\n ");
scanf("%d" , &marks);
if(marks>=85 && marks<=100)
{
	printf("Give the student GRADE A\n");
}
else
	if(marks>=70 && marks<=84)
	{
		printf("Give the student GRADE B\n");
	}
	else 
	   if(marks>=55 && marks<=69)
	   {
	   	printf("Give the student GRADE C");
	   }
if(marks>=40 && marks<=54)
{
	printf("Give the student GRADE D");
}
else
	if(marks<40)
	{
printf("Give the student GRADE F");
}
}
