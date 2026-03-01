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
    int new_score = score;
    if (score > 1) {
        if (score % 8 == 0){
           new_score = TD2ptF(score);
           ScoreCheck(new_score-8); 
        }
        if (score % 7 == 0){
            new_score = TD1ptF(score);
            ScoreCheck(new_score - 7);
        }
        if (score % 6 == 0 ){
            new_score = TDF(score);
            ScoreCheck(new_score - 6);
        }
        if (score % 3 == 0){
            new_score = FGF(score);
            ScoreCheck(new_score - 3);
        }
        if (score % 2 == 0){
            new_score = SafetyF(score);
            ScoreCheck(new_score - 2);
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