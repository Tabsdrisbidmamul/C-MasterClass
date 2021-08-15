#include <stdio.h>
#include <stdbool.h>

int main() 
{
  int a = 15;
  float b = 23.333;
  double c = 55.5555555555555e+11;

  bool boolVar = true;

  enum gender {male, female};
  enum gender child = male;

  char newlineCharacter = '\n';
  
  printf("%d %f %e\n", a, b, c);
  printf("%i\n", boolVar);
  printf("%i", child);
  printf("%c", newlineCharacter);

  return 0;
}