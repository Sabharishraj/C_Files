#include<stdio.h>
#include<string.h> // Required for strlen

int main()
{
    int n, i, sum_of_squares = 0;
    char num_str[20]; // To store the number as a string

    printf("Enter a positive integer:");
    scanf("%d",&n);

    // Convert the integer to a string to iterate through digits
    sprintf(num_str, "%d", n);

    for(i = 0; num_str[i] != '\0'; i++)
    {
        int digit = num_str[i] - '0'; // Convert char digit to int
        sum_of_squares += digit * digit; // Calculate square and add to sum
    }

    printf("The sum of the square of digits of %d is: %d\n", n, sum_of_squares);
    return 0;
}