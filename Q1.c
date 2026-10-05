#include <stdio.h>

int main(){
    int PinDigit, Sum = 0;
    for(int i = 1; i<5; i++){
        printf("Enter the %d digit of you pin: ", i);
        scanf("%d", &PinDigit);
        while (PinDigit<=0 || PinDigit>=10){
            printf("Invalid input. Please enter a single digit (0-9): ");
            scanf("%d", &PinDigit);
        }
        Sum = Sum + PinDigit;
    }
    if (Sum >10){
        printf("Strong PIN");
    }
    else{
        printf("Weak PIN");
    }

}