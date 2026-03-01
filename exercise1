/*
Name: Maddi Clark
KUID: 3162616
Date: 3/1/2026
Description: Takes in two football scores and outputs all possible scoring combinations
*/

#include <stdio.h>

void main(){
    int score;
    int TD2pt;
    printf("Enter 0 or 1 to STOP\n");
    printf("Enter the NFL score: ");
    scanf("%d", score);
}

ScoreCheck(score){
    if (score > 1) {
        if (score % 8 == 0){
           TD2ptF(); 
        }
        if (score % 7 == 0){
            TD1ptF();
        }
        if (score % 6 == 0 ){
            TDF();
        }
        if (score % 3 == 0){
            FGF();
        }
        if (score % 2 == 0){
            SafetyF();
        }
    }
    printf("\n");
}

TD2ptF(score){
    int output = score/8;
    printf("%d TD + 2pt, ", output);
    ScoreCheck(output);
}

TD1ptF(score){
    int output = score/7;
    printf("%d TD + 1pt, ", output);
    ScoreCheck(output);
}

TDF(score){
    int output = score/6;
    printf("%d TD, ");
    ScoreCheck(output);
}

FGF(score){
    int output = score/3;
    printf("%d 3pt FG, ", output);
    ScoreCheck(output);
}

SafetyF(score){
    int output = score/2;
    printf("%d Safety", output);
}