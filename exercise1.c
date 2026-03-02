/*
Name: Maddi Clark
KUID: 3162616
Date: 3/1/2026
Description: Takes in a football score and outputs all possible scoring combinations*/
#include <stdio.h>

int play[5] = {2, 3, 6, 7, 8};

void ScoreCheck(int score, int S, int FG, int TD, int TD1, int TD2) {
    
    if (score < 0) {
        return;
    }

    if (score == 0) {
        printf("%d TD + 2pt, %d TD + FG, %d TD, %d FG, %d Safeties\n",
               TD2, TD1, TD, FG, S);
        return;
    }

    // Safety (2)
    ScoreCheck(score - 2, S + 1, FG, TD, TD1, TD2);

    // Field Goal (3)
    ScoreCheck(score - 3, S, FG + 1, TD, TD1, TD2);

    // Touchdown (6)
    ScoreCheck(score - 6, S, FG, TD + 1, TD1, TD2);

    // TD + FG (7)
    ScoreCheck(score - 7, S, FG, TD, TD1 + 1, TD2);

    // TD + 2pt (8)
    ScoreCheck(score - 8, S, FG, TD, TD1, TD2 + 1);
}

int main() {
    int score;

    while (1) {
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL score: ");
        scanf("%d", &score);

        if (score <= 1) {
            break;
        }

        ScoreCheck(score, 0, 0, 0, 0, 0);
    }

    return 0;
}