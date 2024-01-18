#include <stdio.h>

int main()
{
  int a, b = 0;

  printf("Enter a & b: ");
  scanf("%d %d", &a, &b);
  printf("show input value: a=%d & b=%d\n", a, b); // a = 20, b = 30
  // let's swapping
  int c = a; // 20
  a = b;     // prev- 20 but now (30)
  b = c;     // prev- 30 but now (20)
  printf("After swapping: a=%d & b=%d\n", a, b);
  return 0;
}