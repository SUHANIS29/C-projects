#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome or not
void palindrome(char str1[], char copied[]) {
    if (strcmp(str1, copied) == 0) {
        printf("It is a pallindrome");
    } else {
        printf("Not a pallindrome");
    }
}

int main() {
    char str1[100];
    char str2[100];
    char copied[100];
    
    printf("enter a string 1:\n");
    scanf("%s", str1);
    printf("enter a next string:\n");
    scanf("%s", str2);
    
    // Concatenate str1 and str2
    strcat(str1, str2);
    printf("concatenated: %s\n", str1);
    
    // Copy the concatenated string
    strcpy(copied, str1);
    
    // Reverse the copied string
    strrev(copied);
    printf("reversed: %s\n", copied);
    
    // Check if the original concatenated string is a palindrome
    palindrome(str1, copied);
    
    return 0;
}
