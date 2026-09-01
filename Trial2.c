#include <stdio.h>
#include <stdlib.h>

int main() {

Tryagain:

    int team_A_score = 0;
    int team_B_score = 0;
    int round = 1 , a, Diff, Difference;
    char Aresult, Bresult;

    //starting the shootout
    while (round <6){
        printf("Record Team A's result in the round %d as a Goal(G) or a miss(M):\n", round);
        scanf(" %c", &Aresult);
        if (Aresult == 'G' ){
            ++team_A_score;
        }
        printf("Record Team B's result in the round %d as a Goal(G) or a miss(M):\n", round);
        scanf(" %c", &Bresult);
        if (Bresult == 'G' ){
            ++team_B_score;
        }
        //catering the fact that a shootout can end before all 5 rounds
       Diff = team_A_score - team_B_score;
        int Difference = abs(Diff);

        if (Difference>(5- round)){
        if (team_A_score> team_B_score) {
        printf(" Team A wins!\n");
        
    } else if (team_B_score > team_A_score) {
        printf(" Team B wins!\n");
        
    } /*else {
        printf(" The shootout is a draw!\n"); 
    }*/
        a=1;
         break;
    }
        ++round;
    }
    printf("Team A Score: %d\n", team_A_score);
    printf("Team A Score: %d\n", team_B_score);
    if (a=0){

    if (team_A_score> team_B_score) {
        printf(" Team A wins!");
    } else if (team_B_score > team_A_score) {
        printf(" Team B wins!");
    } else {
        printf(" The shootout is a draw!\n");
         goto Tryagain;
    }
}
    return 0;
}