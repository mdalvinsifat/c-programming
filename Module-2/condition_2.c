#include <stdio.h>

int main() {
    int N;
    
    // Input the amount of money your mother will give you
    scanf("%d", &N);
    
    // Check if you can buy a Punjabi
    if (N >= 1000) {
        printf("I will buy Punjabi\n");
        N -= 1000; 


     if (N >= 500) {
            printf("I will buy new shoes\n");
        }   


        if (N >= 500) {
            printf("Alisa will buy new shoes\n");
        } 

   


    } else {
        printf("Bad luck!\n");
    }
    
    return 0;
}
