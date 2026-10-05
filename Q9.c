#include <stdio.h>

int main(){
    char str[100];
    int Length = 0, index = 0, PalindromeFlag = 1, VowelCount = 0, ConsonantCount = 0; 

    //Entering a string(array of characters) using scanf() function and prints it
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    //Finding the length of the string without using strlen() function
    while (str[index] != '\0') {
        Length++;
        index++;
    }
    printf("Length of the string: %d\n", Length);

    //Checking if its a Palindrome
    for (int i = 0; i < Length / 2; i++) {
        if (str[i] != str[Length - i - 1]) {
            printf("The string is not a palindrome.\n");
            PalindromeFlag = 0;
            break;
        }
    }
    if (PalindromeFlag == 1) {
        printf("The string is a palindrome.\n");
    }

    //Counting the number of vowels and consonants in the string
    for(int i = 0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            VowelCount++;
        } 
        else{
            ConsonantCount++;
        }
    }

    printf("Number of vowels: %d\n", VowelCount);
    printf("Number of consonants: %d\n", ConsonantCount);

}