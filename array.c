#include<stdio.h>
int main(){
    // we accesss the array of characters by this method
    // char a[10];  //one dimensinal array refered as vectors 
    // printf("Enter name: \r\n");
    // scanf("%s" , a);                            //input into arry as string . Note : not used an and operator
                    

//accessing array character by character 
    // printf("%c \n\r",a[0]);
    // printf("%c \r\n",a[1]);
    // printf("%c \r\n",a[2]);
    // printf("%c \r\n",a[3]);

    // printf("Your name is:  %s\r\n",a);        // accessing value as string 


// we accesss the array of numbers by this method
   int b[3] = {20,30,40};
    printf("Values in array are: \r\n");
    //  printf("%i\r\n" ,b);  //will not work

    for (int i = 0; i < 3; i++)
    {
       printf("%i %i\r\n",i ,b[i]);
    }  
    

    return 0;
}
