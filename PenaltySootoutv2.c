#include <stdio.h>
#include <stdlib.h>

// asks one team for their result and returns their updated score
int record_result(char team, int round, int score) {
    char result;
    printf("Record Team %c's result in round %d as a Goal(G) or a miss(M):\n", team, round);
    scanf(" %c", &result);
    if (result == 'G') {
        score++;
    }
    return score;
}

// checks if the outcome is already decided, prints the winner if so, and returns 1 if it was decided
int check_early_win(int team_A_score, int team_B_score, int round) {
    int Difference = abs(team_A_score - team_B_score);

    if (Difference > (5 - round)) {
        if (team_A_score > team_B_score) {
            printf("Team A wins!\n");
        } else {
            printf("Team B wins!\n");
        }
        return 1;
    }
    return 0;
}

// prints final scores, then the winner (or draw). Returns 1 if there was a winner, 0 if draw
int announce_result(int team_A_score, int team_B_score) {
    printf("Team A Score: %d\n", team_A_score);
    printf("Team B Score: %d\n", team_B_score);

    if (team_A_score > team_B_score) {
        printf("Team A wins!\n");
        return 1;
    } else if (team_B_score > team_A_score) {
        printf("Team B wins!\n");
        return 1;
    } else {
        printf("The shootout is a draw!\n");
        return 0;
    }
}

int main() {
    int done = 0;

    while (done == 0) {
        int team_A_score = 0;
        int team_B_score = 0;
        int round = 1;
        int decided_early = 0;

        while (round < 6) {
            team_A_score = record_result('A', round, team_A_score);
            team_B_score = record_result('B', round, team_B_score);

            if (check_early_win(team_A_score, team_B_score, round) == 1) {
                decided_early = 1;
                break;
            }
            round++;
        }

        if (decided_early == 0) {
            done = announce_result(team_A_score, team_B_score);
        } else {
            done = 1;
        }
    }

    return 0;
}