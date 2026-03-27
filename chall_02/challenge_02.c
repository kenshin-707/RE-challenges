#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    char correctPassword[] = "CYRA123#";
    const char *flag = "FLAG{decoy_for_you_to_find_the_real_flag}";
    
    printf("Enter the password: ");
    scanf("%49s", password);
    
    // Check if the entered password matches
    if (strcmp(password, correctPassword) == 0) {
        printf("✓ Correct password!\n");
        printf("Flag: %s\n", flag);
        return 0;
    } else {
        printf("✗ Incorrect password!\n");
        return 1;
    }
}
