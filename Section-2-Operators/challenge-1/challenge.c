#include <stdio.h>
int main(int argc, char argv[])
{
  int minutes;
  double days;
  double years;

  printf("Enter the number of minutes ");
  scanf("%d", &minutes);
  printf("Entered Minutes: %d\n", minutes);

  days = (double) minutes / (24 * 60);
  years = (double) minutes / (365 * 24 * 60);

  printf("Day(s): %f\n", days);
  printf("Year(s): %f\n", years);

  return 0;
}