#include<stdio.h>
int Prime(int, int);
int main()
{
    int a, number;
    printf("Enter a positive number to check if Prime: ");
    scanf("%d", &a);
    number = Prime(a,a/2);
    if(number == 1)
    {
        printf("%d is a prime number\n", a);
    }
    else
    {
        printf("%d is a Composite number\n",a);
    }
    return 0;
}

int Prime(int c, int d)
{
    if(d == 1)
        return 1; 
    else
    {
        if(c%d == 0)
            return 0;
        else
            Prime(c, d-1);   
    }
}
