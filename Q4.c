#include <stdio.h>

int main(){
    int Number, ReverseNumber=0, Remainder,n;
    printf("Enter a number: ");
    scanf("%d", &Number);
    n = Number;

    while(n>0){
        Remainder = n%10;
        ReverseNumber = ReverseNumber*10 + Remainder;
        n = n/10;
    }

    if (Number == ReverseNumber)
        printf("%d is a palindrome number.\n", Number);
    else
        printf("%d is not a palindrome number.\n", Number);
}