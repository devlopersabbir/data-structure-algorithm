#include <stdio.h>

int main()
{
  int x, y, z;
  printf("Enter three number: ");
  scanf("%d\n%d\n%d", &x, &y, &z);
  // scanf("%d", &y);
  // scanf("%d", &z);

  float avarage = (x + y + z) / 3.0;
  printf("Avarge is: %2f\n", avarage);
  return 0;
}