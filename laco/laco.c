#include<stdio.h>

int main(){
    int n = 1;

    while(n<=100){

        if (n%3 == 0 && n%5 == 0){
            printf("FizzBuzz");
        }
        else if (n%3 == 0){
            printf("Fizz");
        }
        else if (n%5 == 0){
            printf("Buzz");
        }
        else{
            printf("%d\n", n);
        }

        if (n%3 == 0 || n%5 == 0){
            printf("\n");
        }
        
        n++;
    }
    
    return 0;
}