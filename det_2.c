#include<stdio.h>
int main()
{
    int a[2][2],det=0;
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("Enter the element a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    det=(a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
    printf("Determinant of the matrix= %d",det);
    return 0;
}