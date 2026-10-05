#include <stdio.h>

int main(){
    int number, OddCount=0, EvenCount=0 ;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    while (number >0){
        if ((number % 10)%2 == 0){
            EvenCount++;
        } else {
            OddCount++;
        }
        number = number / 10;
    }
    printf("The number of odd digits is: %d\n", OddCount);
    printf("The number of even digits is: %d\n", EvenCount);
}