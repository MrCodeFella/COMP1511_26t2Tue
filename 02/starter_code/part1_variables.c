// part1_variables
//
// This program was written by YOUR-NAME (ZID),
// on [DATE]
//
// This program calculates the area of a circle

#include <stdio.h>

// int 1 0 100 -100
// char 'a' 'y' '(' '/' '4'
// double 1.0 5.9 -100.2020

#define PI 3.14

int main(void) {
    // 1. Declare the variables
    // pi*r^2
    double radius;
    double result;
    
    // 2. Initalise the variables
    scanf("%lf", &radius);
    
    // 3. Calculate the area of the circle
    result = PI * radius * radius;
    
    // 4. Print the result
    printf("The result is %.2lf\n", result);
    // printf("The result is %d\n", result);
    // printf("The result is %c\n", result);

    return 0;
}


