#include <stdio.h>

int main(){
    int Ticket, size, digit;
    printf("Enter the ticket number: ");
    scanf("%d", &Ticket);
    size = sizeof(Ticket);
    for(int i=0; i<size; i++){
        digit = Ticket % 10;
        Ticket = Ticket/10;
        printf("%d", digit);
    }
}