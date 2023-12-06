#include <stdio.h>

int main() {
    int i, number;
    scanf("%d", &number);
    int result = 0;
    for(i = 1; i <= number; i++){
        result += i;
    }
    printf("result: %d\n", result);

    return 0;
}