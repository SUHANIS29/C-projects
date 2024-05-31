#include <stdio.h>
#include <string.h>
//conacatenate and reverse concatenated string
// Function to concatenate two strings
void concatenateStrings(char str1[],char str2[]) {
     // Copy the first string to the result string
    strcat(str1, str2); // Concatenate the second string to the result string
}

// Function to reverse a string
void reverseString(char rev[], const char str1[]) {
    int length = strlen(str1);
    int i, j = 0;

    // Copy characters from str to result in reverse order
    for (i = length - 1; i >= 0; i--) {
        rev[j++] = str1[i];
    }
    rev[j] = '\0'; // Add null terminator to end the reversed string
}

int main() {
    char str1[100], str2[100], rev[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate two strings
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s \n",str1);

    // Reverse the first string
    reverseString(rev, str1);
    printf("Reversed string: %s \n", rev);


    return 0;
}
