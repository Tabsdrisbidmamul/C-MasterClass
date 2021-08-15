#include <stdio.h>
int main() 
{
  char text[100];
  int i;
  
  printf("Enter a value: ");
  scanf("%s %d", text, &i);

  printf("\nYou entered: %s %d", text, i);
  
  return 0;
}