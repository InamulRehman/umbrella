#include<stdio.h>
#include<string.h>

int main()
{
    char source[6] ={0};
    char destnation[6] ={0};
    printf("Enter a string: ");
    scanf("%s",source);    
    // printf("Enter another string: ");
    // scanf("%s",destnation);    

    size_t index = strlen(source);  //returns the string you have entered not array length
    strcpy(destnation,source);      //copying to destination from source 
    printf("Copied string from source: %s \n",destnation);
    int result = strcmp(source,destnation);  //coparing two strings
    strcat(destnation,source);      //concatinating the strings in destination and from source 

    printf("Length of string in array is : %i \n",index);
    printf("Your result on comparison is: %i \n",result );
    printf("After concatinating two strings : %s \n",destnation); 

    return 0 ;
}


// Note : Refer to concatination to see how concatination works