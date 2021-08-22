#include <stdio.h>

float calculateGrossPay(float hoursWorked);
float calculateTaxes(float grossPay);

#define PAYRATE 12.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.2
#define TAXRATE_REST 0.25
#define OVERTIME 40

int main() {
  float hoursWorked;
  float grossPay;
  float taxes;
  float netPay;

  
  printf("Enter the number of hours you work? ");
  scanf("%f", &hoursWorked);

  grossPay = calculateGrossPay(hoursWorked);
  taxes = calculateTaxes(grossPay);
  netPay = grossPay - taxes;

  printf("Your Gross Pay is: %.2f\n", grossPay);
  printf("Taxes come to: %.2f\n", taxes);
  printf("After Tax is: %.2f\n", netPay);

}

float calculateGrossPay(float hoursWorked) {
  if(hoursWorked <= OVERTIME) {
    return hoursWorked * PAYRATE;
  } else {
    return (40.0f * PAYRATE) +  ((hoursWorked - 40.0f) * (PAYRATE * 1.5));
  }
}

float calculateTaxes(float grossPay) {
  if(grossPay <= 300) {
    return grossPay * TAXRATE_300;
  } else if (grossPay <= 450) {
    return grossPay * TAXRATE_150;
  } else {
    return grossPay * TAXRATE_REST;
  }
}