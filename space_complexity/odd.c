#include <stdio.h>

int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d is odd number. \n", num);
    }else {
        printf("%d is even number. \n", num);
    }
}