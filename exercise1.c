/*
Name: Maddi Clark
KUID: 3162616
Date: 3/1/2026
Description: Takes in two football scores and outputs all possible scoring combinations
*/

#include <stdio.h>


void TD2ptF(int score){
    int output = score/8;
    printf("%d TD + 2pt, ", output);
}

void TD1ptF(int score){
    int output = score/7;
    printf("%d TD + 1pt, ", output);
}

void TDF(int score){
    int output = score/6;
    printf("%d TD, ", output);
}

void FGF(int score){
    int output = score/3;
    printf("%d 3pt FG, ", output);
}

void SafetyF(int score){
    int output = score/2;
    printf("%d Safety", output); 
}

void ScoreCheck(int score){
    if (score > 1) {
        if (score % 8 == 0){
           TD2ptF(score);
           ScoreCheck(score-8); 
        }
        if (score % 7 == 0){
            TD1ptF(score);
            ScoreCheck(score - 7);
        }
        if (score % 6 == 0 ){
            TDF(score);
            ScoreCheck(score - 6);
        }
        if (score % 3 == 0){
            FGF(score);
            ScoreCheck(score - 3);
        }
        if (score % 2 == 0){
            SafetyF(score);
            ScoreCheck(score - 2);
        }
    }
    printf("\n");
}

void main(){
    int score = 2;
    while (score > 1){
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL score: ");
        scanf("%d", &score);
        ScoreCheck(score);
    }
}