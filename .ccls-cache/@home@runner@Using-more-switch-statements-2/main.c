#include <stdio.h>

//Using switch statements to create a simple calaculator program that multiplies, divides, adds and subtrats, using an operator and two operands

int main(void) 
{
  double i, j;
  char opera;
  
printf("Please enter an operator (-, +, *, /):\t");
  scanf("%c", &opera);

  printf("Please enter two numbers:\t");
  scanf("%lf %lf", &i, &j);
    
  if (opera == '+')
    printf("%.1lf + %.1lf = %.1lf\n", i, j, i + j);

  else if (opera == '-')
printf("%.1lf - %.1lf = %.1lf\n", i, j, i - j);

  else if (opera == '/')
    printf("%.1lf / %.1lf = %.1lf\n", i, j, i / j);

  else if (opera == '*')
    printf("%.1lf x %.1lf = %.1lf\n", i, j, i * j);

  else
    printf("Inavlid operand\n");
    
  
printf("\n\nEnd of program\n");
  sleep(5);
  system("clear");
  printf("Welcome User\n");

  
  return 0;
}