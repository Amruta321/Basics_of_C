#include <stdio.h>
 int main()
{
    int base, exponent;
    float power = 1;
    int i;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int expo = exponent;
    while (expo < 0)
    {
        {
            power = power/base;
            expo++;
        }
    }
 
    if(exponent >0)
    {
        for(i = 1; i <= exponent; i++)
        {
            power = power * base;
        }
    }
    printf(" The power is: %f",power);
  return 0;
}