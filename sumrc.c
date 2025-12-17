#include <stdio.h>
int main() 
{
    int rows = 0;
    int columns = 0;        // Fixed spelling: coloumns -> columns
    int sumrow = 0;
    int sumcolumn = 0;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);     // Added &
    printf("Enter number of columns: ");
    scanf("%d", &columns);  // Added &
    
    int a[10][10] = {0};    // Fixed: VLA syntax + size limit
    
    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {  // Fixed: columns
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);           // Added &
        }
    }
    
    // Print matrix + column sums
    printf("\nThe original matrix is\n");
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < columns; y++) {
            printf("%d\t", a[x][y]);
            sumcolumn += a[x][y];        // Fixed: semicolon + variable name
        }
        printf("\n");
    }
    
    // Reset sumcolumn for each row? Logic unclear - assuming row sums here
    printf("\nRow sums:\n");
    for (int i = 0; i < rows; i++) {
        sumrow = 0;  // Reset for each row
        for (int j = 0; j < columns; j++) {
            sumrow += a[i][j];
        }
        printf("Sum of row %d: %d\n", i, sumrow);
    }
    
    printf("Total sum of all columns: %d\n", sumcolumn);
    
    return 0;
}
