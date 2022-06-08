#include<stdio.h>
#include<string.h>

int main(){

    int numbers[10];
    int dummy;

    for (int i = 0; i <10; i++)
    {
       printf("Enter student %i marks: \r\n",i+1);
       scanf("%i", &numbers[i]);   
    }
    printf("Student marks are: \r\n");
     for (int i = 0; i < 10; i++)
    {
       printf("%i %i\r\n",i ,numbers[i]);
      
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j =i+1; j < 10; j++)
        {
            if(numbers[i] < numbers[j])
            {
                dummy = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = dummy;
            }
        }
        
    }

  printf("Student marks are after sort: \r\n");
  for (int i = 0; i < 10; i++)
    {
       printf("%i %i\r\n",i ,numbers[i]);
      
    }
   

return 0;
}