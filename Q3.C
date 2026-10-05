#include <stdio.h>

//There is a mistype in the question
//As there are 30 students in class the loop must run 30 times instead of 15 so we can calculate all
int main(){
    int Absenties=0, Presenties=0, Student;
    for(int i=0; i<30; i++){
        printf("Enter 1 if student is present or 0 if student is absent: ");
        scanf("%d", &Student);
        if (Student == 1){
            Presenties++;
        }
        else{
            Absenties++;
        }
    }
    printf("Number of Absenties: %d\n",Absenties);
    printf("Number of Presenties: %d\n",Presenties);
    
}