#define Square(x) ((x)*(x))
#include<stdio.h>
int main()
{
    int a = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    int result = Square(a);
    printf("Square of %d is %d\n",a, result);
    return 0;
}