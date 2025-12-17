// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[7]={1,2,3,4,5,6,7};
    int target=0;
    int i=0;
    printf("Enter the target to search");
    scanf("%d",&target);
    for (int i=0; i<7; i++)
    {
        if (a[i]==target)
        {
            printf ("Target element found at %d position in the array",i+1);
        }
    }
    return 0;
}