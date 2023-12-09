#include <stdio.h>

int main() {
    int number;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for(int i = 0; i < number; i++){
        for(int j = 0; j < number; j++) {
            count += 1;
        }
    }
    printf("Result is: %d", count);
    return 0;
}