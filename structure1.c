#include<stdio.h>

//defining a structure
struct alpha
{
   int num1;
   int num2;
   char character;
};


void data(struct alpha g);
int main()
{
//structure object
    struct alpha gemma;

    // printf("Enter first number: ");
    // scanf("%i",&gemma.num1);
    // printf("Enter second number: ");
    // scanf("%i",&gemma.num2);

    // printf("Enter a character: ");
    // scanf(" %c",&gemma.character);

    // printf("First Number : %i\r\n",gemma.num1);
    // printf("Second Number : %i\r\n",gemma.num2);
    // printf("Character is :  %c\n\r", gemma.character);

//passing structure to a function
    data(gemma);

    return 0 ;
}

//function to set values to structure members
void data(struct alpha g)
{
    printf("Values on function call are :\r\n ");
    g.num1 = 12;
    g.num2= 19;
    g.character = 'f';
    printf("%i\r\n",g.num1);
    printf("%i\r\n",g.num2);
    printf("%c\r\n",g.character);

}