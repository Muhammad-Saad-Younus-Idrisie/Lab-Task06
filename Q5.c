#include <stdio.h>

int main(){
    int n, Two_n_Factorial, Two_n_Factorial_ANS=1, n_Plus_One_Factorial, n_Plus_One_Factorial_ANS=1, n_Factorial, n_Factorial_ANS=1, CatalanNumber;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    Two_n_Factorial = n*2;
    while(Two_n_Factorial >1){
        Two_n_Factorial_ANS = Two_n_Factorial_ANS * (Two_n_Factorial);
        Two_n_Factorial--;
    }
    n_Factorial = n;
    while(n_Factorial >1){
        n_Factorial_ANS = n_Factorial_ANS * (n_Factorial);
        n_Factorial--;
    }
    n_Plus_One_Factorial = n + 1;
    while(n_Plus_One_Factorial >1){
        n_Plus_One_Factorial_ANS = n_Plus_One_Factorial_ANS * (n_Plus_One_Factorial);
        n_Plus_One_Factorial--;
    }
    CatalanNumber = Two_n_Factorial_ANS / (n_Plus_One_Factorial_ANS * n_Factorial_ANS);
    printf("The Catalan Number for %d is %d",n, CatalanNumber);
    return 0; 
}