/*
Name: Maddi Clark
KUID: 3162616
Date: 3/1/2026
Description: Takes in two football scores and outputs all possible scoring combinations
*/

#include <stdio.h>


int TD2ptF(int score){
    int output = score/8;
    printf("%d TD + 2pt, ", output);
    return output;
}

int TD1ptF(int score){
    int output = score/7;
    printf("%d TD + 1pt, ", output);
    return output;
}

int TDF(int score){
    int output = score/6;
    printf("%d TD, ", output);
    return output;
}

int FGF(int score){
    int output = score/3;
    printf("%d 3pt FG, ", output);
    return output;
}

int SafetyF(int score){
    int output = score/2;
    printf("%d Safety", output); 
    return output;
}

void ScoreCheck(int score){
    if (score > 1) {
        if (score % 8 == 0){
           int output=TD2ptF(score);
           ScoreCheck(output); 
        }
        if (score % 7 == 0){
            int output=TD1ptF(score);
            ScoreCheck(output);
        }
        if (score % 6 == 0 ){
            int output=TDF(score);
            ScoreCheck(output);
        }
        if (score % 3 == 0){
            int output=FGF(score);
            ScoreCheck(output);
        }
        if (score % 2 == 0){
            int output=SafetyF(score);
            ScoreCheck(output);
        }
    }
    printf("\n");
}

void main(){
    int score = 2;
    while (score > 1){
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL score: ");
        scanf("%d", score);
        ScoreCheck(score);
    }
}