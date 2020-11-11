#include<stdio.h>
main ()
{
	int age;
	char name[20];
	printf("Enter your Name :\n");
	scanf("%s" , &name);
	printf("please do enter your Age :\n");
	scanf("%d" , &age);
	printf("oh so you're the %d old",age );printf(" %s I knew....that's interesting", name);
}
