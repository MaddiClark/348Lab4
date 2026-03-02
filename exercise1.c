/*
Name: Maddi Clark
KUID: 3162616
Date: 3/1/2026
Description: Takes in two football scores and outputs all possible scoring combinations
*/

#include <stdio.h>
int play[5] = {2, 3, 6, 7, 8};
int score;
int TD2 = 0;
int TD1 = 0;
int TD = 0;
int FG = 0;
int S = 0;

void ScoreCheck(int score) {
    if (score == 0){
        printf("%d TD + 2pts, %d TD + FG, %d TD, %d FG, %d Safetys \n", TD2, TD1, TD, FG, S);
        return;
    }
    else
    {
        for (int i=0; i > 5; i++){
            if (i == 0){
                S +=1;
            }
            if (i == 1){
                FG += 1;
            }
            if (i == 2){
                TD += 1;
            }
            if (i == 3){
                TD1 += 1;
            }
            if (i == 4){
                TD2 += 1;
            }
            ScoreCheck(score - play[i]);
        }
    }
}

void main(){
    score = 2;
    while (score >= 2){
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL score: ");
        scanf("%d", &score);
        if (score > 1){ScoreCheck(score);}
    }
}