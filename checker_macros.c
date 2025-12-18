#define checker(x) ((x)%2==0 ? "Even" : "Odd")
#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("%d is %s\n", n, checker(n));
    return 0;
}