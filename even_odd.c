//function to check weather number is even or odd

#include<stdio.h>
int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%i",&num);

    if (num & 1 == 1)
    {
        printf("Num is odd..");
    }
    else
    {
        printf("Num is even..");

    }
    return 0 ;
}