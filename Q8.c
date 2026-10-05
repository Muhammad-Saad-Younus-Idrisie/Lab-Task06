#include <stdio.h>

int main() {
    int NumArray[8], Largest, Smallest, NumToFind, NewNum, IndexToInsert, IndexToDelete, Size, NumFound =0;
    Size = sizeof(NumArray)/4;

    //Creating and Initializing the Array with Inputs by the user
    for (int i = 0; i<Size; i++){
        printf("Enter the %d number:", i+1);
        scanf("%d", &NumArray[i]);

    }
    printf("The Complete Array is:\n");
    for (int i = 0; i<Size; i++){
        printf("|%d| ", NumArray[i]);
    }
    printf("\n");

    //Finding the Larget and Smallest Number in the Array
    Largest = NumArray[0];
    Smallest = NumArray[0];
    for (int i = 0; i<Size; i++){
        if (NumArray[i] > Largest){
            Largest = NumArray[i];
        }
        if (NumArray[i] < Smallest){
            Smallest = NumArray[i];
        }

    }
    printf("The Largest Number in the Array is: %d\n", Largest);
    printf("The Smallest Number in the Array is: %d\n", Smallest);

    //Finding the Index of the user input number
    printf("Enter the number you want to search for: ");
    scanf("%d", &NumToFind);
    for (int i = 0; i < Size; i++) {
        if (NumArray[i] == NumToFind) {
            printf("The number %d is found at index %d", NumToFind, i);
            NumFound = 1;
            break;
        }
    }
    if (NumFound == 0) {
        printf("The number %d is not found in the array.", NumToFind);
    }

    //Inserting a new number at a specific index in the array
    printf("\nEnter the index where you want to insert a new number (0-%d): ", Size - 1);
    scanf("%d", &IndexToInsert);
    printf("Enter the new number: ");
    scanf("%d", &NewNum);
    NumArray[IndexToInsert] = NewNum;

    //Deleting the number at a Array index
    printf("Enter the index of the number you want to delete (0-%d): ", Size - 1);
    scanf("%d", &IndexToDelete);
    for (int i = IndexToDelete; i<Size - 1;i++){
        NumArray[i] = NumArray[i + 1];
    }
    Size--; // Decrease the size of the array after deletion

    //Printing the final array
    for (int i = 0; i<Size; i++){
        printf("|%d| ", NumArray[i]);
    }

    return 0;

}
