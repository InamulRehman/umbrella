#include<stdio.h>


 int fact(int num){
        if (num <= 1)
        {
            return 1;
        }
        else
        {
            return num * fact(num-1);
        }
        
    }
int main(){

    int ans = fact(10);
    printf("%d", ans);
    return 0;
}