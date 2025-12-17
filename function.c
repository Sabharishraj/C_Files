#include <stdio.h>
#include <stdlib.h> // Needed for the abs() function

// Function Prototype (Good practice)
// Specifies the function name, return type, and parameter types
int calc(int point1, int point2);

// Function Definition
// Calculates the 1D Euclidean distance (absolute difference)
int calc(int point1, int point2)
{
    // Declare local variables only if needed (not the parameters)
    int diff;
    int result;

    // 1. Calculate the difference
    diff = point1 - point2;

    // 2. Calculate the absolute value
    // abs() is a function from <stdlib.h> that returns the absolute value of an integer
    result = abs(diff);
    
    // OR, more simply:
    // int result = abs(point1 - point2);

    return result; 
}

int main()
{
    printf("Enter two numbers (num1 num2): ");
    int num1, num2;
    // Check for successful input (Good practice)
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // Call the corrected function
    printf("The Euclidean distance is %d\n", calc(num1, num2));

    return 0;
}