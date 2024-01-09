#include <stdio.h>
int main()
{
  const float pi = 3.1415;
  float radius;
  printf("Enter radius: ");
  scanf("%f", &radius);
  float ans = pi * radius * radius;

  printf("Radius of circle: %f\n", ans);
  return 0;
}