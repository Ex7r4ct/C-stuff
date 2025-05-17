#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>


int main () {
    char again[10] = "yes";
    char flag[50];
    FILE * fpointer = fopen("flag.txt", "r");
    // srand(time(NULL));
    srand(123);

    do {
    
   
    int min = 1;
    int max = 222222222;
    int guess;
    
    printf("Guess a number between 1 - 222222222: ");
    scanf("%d", &guess);
    int randomNum = (rand() % (max-min+1) ) + min; 
    printf("The correct number was %d\n", randomNum);
    if (guess != randomNum) {
        printf("Wrong Number :(\nTry again? (yes or no) ");
    }
    else {
        printf("Well done! Here's your reward:\n");
        fgets(flag, 255, fpointer);

        printf("%s", flag);
        printf("\nTry again? (yes or no) ");
    }
    scanf("%s", &again);
} while (strcmp(again, "yes")==0);
   

    return 0;
}

