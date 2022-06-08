#include<stdio.h>
#include<string.h>

// how to copy contents of source string to destination string
int main()
{

    int index;
    char destination[50] ={0};
    char source[20] ;

    printf("Enter your first first: ");
    scanf("%[^\n]",destination);
    printf("Enter your second name: ");
    scanf("%s",source);

   
    index = strlen(destination);

    for (int i = 0; i < strlen(source); i++)
    {
       destination[i+index] = source[i];// traversing source getting value from i th location and storing it at i+index th location in  destinaton 
    }

    printf("Your Name is: %s",destination);
    return 0 ;
}