#include <stdio.h>
int main()
{
  enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
  enum company xerox = XEROX;
  enum company google = GOOGLE;
  enum company ebay = EBAY;

  printf("Xerox: %i\nGoogle %i\nEbay: %i\n", xerox, google, ebay);

  return 0;

}