#include<stdio.h>

int main(){
  printf("Enter int number: ");
  int nums;
  scanf("%d", &nums);

  printf("last numebr is: %d\n", nums % 10);
  return 0;
}
