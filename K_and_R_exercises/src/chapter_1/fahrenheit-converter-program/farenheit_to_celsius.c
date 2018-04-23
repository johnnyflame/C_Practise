#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */

void fahrenheit_to_celsius(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limite of temperature table */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    fahr = lower;



    printf("********************************************\n");
    printf("**********FAHRENHEIT-CELSIUS-CONVERTER******\n");
    printf("********************************************\n");

    while (fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

/**
 * Exercise 1.4
 * Changes celsius to Fahrenheit
 * for celsius in range 1
 */
void celsius_to_fahrenheit(int lower, int upper,int increment){
    int fahr, celsius;

    printf("********************************************\n");
    printf("**********CELSIUS-FAHRENHEIT-CONVERTER******\n");
    printf("********************************************\n");


    for(celsius=lower; celsius <= upper; celsius+=increment)
    {
      fahr = (celsius * 9 / 5) + 32;
      printf("%d\t%d\n", celsius, fahr);
    }
}


int main()
{
    celsius_to_fahrenheit(0,100,1);
    return 0;
}
