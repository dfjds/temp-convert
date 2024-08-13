/*This is a simple text-based temperature converter 
 * made in c.*/

#include <stdio.h>   // includes functions 'printf' and 'scanf'
#include <string.h>  // includes funtion 'strcmp'

// Fahrenheit to Celsius func
void ftoc (double f) {
  double c;
  
  // f to c formula 
  c = (5.0/9.0) * (f - 32);
  printf("%lf\n", c);
}

// Celsius to Fahrenheit func
void ctof(double c) {
  double f;

  // c to f formula
  f = (9.0/5.0) * c + 32;
  printf("%lf\n", f);
}


// Main func
int main() {
  char input[3];  // Allows two char inputs plus null
  printf("F to C (fc). C to F (cf): ");
  scanf("%2s", &input); // scans two char inputs as string

  // uses strcmp to compare string inputs
  // if true then 0 so if 0 etc.
  
  // f to c
  if (strcmp(input, "fc") == 0) {
    double far;
    
    printf("Enter Fahrenheit: ");
    scanf("%lf", &far);

    ftoc(far); // calls func
  }

  // c to f
  else if (strcmp(input, "cf") == 0) {
    double cel;
    
    printf("Enter Celsius: ");
    scanf("%lf", &cel);

    ctof(cel); // calls func
  }

  // nonsense input
  else {
    printf("'%s' is not a valid input.\n", input);
  }
  
  return 0;
}
