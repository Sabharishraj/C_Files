#include<stdio.h>
#include<string.h> // Required for strlen and strcmp

int main()
{
    char str[100];
    char reversed_str[100]; // To store the reversed string
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str); // Reads a single word (stops at whitespace)

    len = strlen(str); // Get the length of the input string

    // Reverse the string
    for (i = 0, j = len - 1; i < len; i++, j--)
    {
        reversed_str[i] = str[j];
    }
    reversed_str[len] = '\0'; // Null-terminate the reversed string

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed_str);

    // Compare the original string with the reversed string
    if (strcmp(str, reversed_str) == 0) // strcmp returns 0 if strings are identical
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("the string is not palindrome");
    }
}

// Output 