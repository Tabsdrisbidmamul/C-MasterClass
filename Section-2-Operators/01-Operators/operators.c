#include <stdio.h>
int main()
{
  
  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101

  int resultBitAnd;
  int resultBitOr;
  int resultBitexclusiveOr;

  resultBitAnd = a & b; // 0000 1100
  resultBitOr = a | b; // 0011 1101
  resultBitexclusiveOr = a ^ b; // 0011 0001;

  printf("BITWISE And: %d\n", resultBitAnd); 
  printf("BITWISE Or: %d\n", resultBitOr); 
  printf("BITWISE Exclusive Or: %d\n", resultBitexclusiveOr); 
  printf("BITWISE INVERT: %d\n", ~a); // 1100 0011 -> 1100 0100
  printf("BITWISE SHIFT LEFT: %d\n", a << 2); // 1111 0000
  printf("BITWISE SHIFT RIGHT: %d\n", a >> 2); // 0000 1111

  return 0;
}