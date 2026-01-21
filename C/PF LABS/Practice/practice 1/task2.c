#include <stdio.h>
int main() {
    int team1Runs, team1Wickets, team2Runs, team2Wickets;
    printf("Enter runs scored by Team 1: ");
    scanf("%d", &team1Runs);
    printf("Enter wickets lost by Team 1: ");
    scanf("%d", &team1Wickets);
    printf("Enter runs scored by Team 2: ");
    scanf("%d", &team2Runs);
    printf("Enter wickets lost by Team 2: ");
    scanf("%d", &team2Wickets);

    if (team1Runs < 0 || team1Wickets < 0 || team2Runs < 0 || team2Wickets < 0) {
        printf("All values must be non-negative.\n");
        return 0; 
    }
    if (team2Runs > team1Runs && team2Wickets > 9) {
        printf("Team 2 Wickets should be less than 10\n");
        return 0;
    }
    else if (team2Runs > team1Runs && team2Wickets < 10) {
        printf("Team 2 has won by %d wickets.\n", 10 - team2Wickets);
    }
    else if (team1Runs > team2Runs) {
        printf("Team 1 has won by %d runs.\n", team1Runs - team2Runs);
    }
    else if (team1Runs == team2Runs && team1Wickets != team2Wickets) {
        if (team1Wickets < team2Wickets) {
            printf("Team 1 has won by 1 run.\n");
        } else {
            printf("Team 2 has won by %d wickets.\n", 10 - team2Wickets);
        }
    }
    else {
        printf("The match is a draw.\n");
    }
    return 0; 
}