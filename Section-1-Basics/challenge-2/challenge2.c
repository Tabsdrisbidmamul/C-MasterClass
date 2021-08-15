#include <stdio.h>
int main(int argc, char argv[])
{
  double width, height, perimeter, area;
  width = 4;
  height = 5;
  perimeter = (width + height) * 2;
  area = width * height;

  printf("Width: %.2f units, Height: %.2f nits\n", width, height);
  printf("Perimeter of Rectangle is: %.2f units\n", perimeter);
  printf("Area of Rectangle is: %.2f units^2\n", area);

  return 0;
}