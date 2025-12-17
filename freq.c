#include <stdio.h>
int main() {
    int n, i, j;
    int arr[100];
    int elem[100], freq[100];
    int count, m = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
    {
        count = 1;
        if (arr[i] == -1)
            continue;
        for (j = i + 1; j < n; j++)
         {
            if (arr[i] == arr[j]) 
            {
                count++;
                arr[j] = -1;
            }
        }
        elem[m] = arr[i];
        freq[m] = count;
        m++;
    }
    for (i = 0; i < m - 1; i++) 
    {
        for (j = i + 1; j < m; j++)
         {
            if (freq[i] < freq[j])
             {
                int temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;

                temp = elem[i];
                elem[i] = elem[j];
                elem[j] = temp;
            }
        }
    }
    printf("\nElement  Frequency (Descending)\n");
    for (i = 0; i < m; i++) 
    {
        printf("%d\t   %d\n", elem[i], freq[i]);
    }
    return 0;
}