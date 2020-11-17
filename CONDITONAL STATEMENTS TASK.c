#include<stdio.h>
main()
{
	printf("Choose an item from the menu below :\n\n1. Burger ,Rs.89\n2. Pasta ,Rs.79\n3. Pizza ,Rs.129\n4. Noodles , Rs.69\n5. Biriyani, Rs.180\n\n");
	int choice=0;
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf(" Item chosen : Burger\nPrice : RS89 ");
			break;
		case 2:
			printf("Item chosen : Pasta\nPrice : Rs79");
			break;
		case 3:
			printf("Item chosen : Pizza\nPrice : Rs129");
			break;
		case 4:
			printf("Item chosen : Noodles\nPrice : Rs69");
			break;
		case 5:
			printf("Item chosen : Biriyani\nPrice : Rs180");
			break;
		default :
			printf("sorry we don't have that in our today's menu");
		}
	}
