#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void flag() {
    FILE *fp = fopen("flag.txt", "r");
    if (fp != NULL) {
        char line[256];
        if (fgets(line, sizeof(line), fp) != NULL) {
            printf("Flag: %s", line);
        } else {
            printf("Error reading flag file.\n");
        }
        fclose(fp);
    } else {
        printf("Flag file not found.\n");
    }
}

int main() {
    char productKey[20];
    char correctKey[] = "CYRA_k3n";
    float num1, num2;
    
    printf("Simple Calculator\n");
    printf("if you have the key then enter it or else put 0 \n");
    printf("Enter product key: ");
    scanf("%19s", productKey);
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    if (strcmp(productKey, correctKey) == 0) {
        printf("\nAll Calculations:\n");
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        
        if (num2 != 0) {
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        } else {
            printf("Division by zero is not allowed.\n");
        }
        
        // For modulus, use integers
        int int1 = (int)num1;
        int int2 = (int)num2;
        if (int2 != 0) {
            printf("%d %% %d = %d\n", int1, int2, int1 % int2);
        } else {
            printf("Modulus by zero is not allowed.\n");
        }
        flag();
    } else {
        printf("\nSingle Function (Addition):\n");

        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    }
    
    return 0;
}
