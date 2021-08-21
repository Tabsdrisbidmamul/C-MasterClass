#include <stdio.h>
int main() 
{
  printf("char: %zd byte(s)\n", sizeof(char));
  printf("int: %zd byte(s)\n", sizeof(int));
  printf("float: %zd byte(s)\n", sizeof(float));
  printf("double: %zd byte(s)\n", sizeof(double));
  printf("long: %zd byte(s)\n", sizeof(long));
  printf("long long: %zd byte(s)\n", sizeof(long long));
  printf("long double: %zd byte(s)\n", sizeof(long double));
  return 0;
}