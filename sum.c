#include<stdio.h>

int sum(int a){
    if (a <=1)
    {
       return 1;
    }
    else
    {

    return a + sum(a-1);
    }
}


int main(){


    int sum1 = sum(10);
    printf("%d",sum1);
    return 0;


}