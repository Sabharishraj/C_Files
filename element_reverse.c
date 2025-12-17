#include <stdio.h>

int main() {
    int a[4] = {1002, 1004, 1006, 1008};
    int s[4] = {0}; 
    int temp = 0;
    int digit = 0;
    int reversed = 0;
    
    for (int i = 0; i < 4; i++) {
        reversed = 0;  
        int num = a[i];  
        
        while (num != 0) {
            digit = num % 10;
            reversed = reversed * 10 + digit;  
            num /= 10;
        }
        s[i] = reversed; 
    }
    
    printf("The reversed array elements\n");
    for (int j = 0; j < 4; j++) {
        printf("The reversed element at position %d is %d\n", j, s[j]);
    }
    return 0;
}
