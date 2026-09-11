#include <stdio.h>
#include <stdlib.h>
void compareScores(int a, int b) {
    if (a > b) {
        printf(" Team A wins!\n");
    } else if (b > a) {
        printf(" Team A wins!\n");
    } else {
        printf(" The shootout is a draw!\n");
    }
}

void penalty(void){
    int team_A_score = 0;
    int a=0;
    int team_B_score = 0;
    int round = 1 , Diff;
    char Aresult, Bresult;

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
        Diff = team_A_score - team_B_score;
        int Difference = abs(Diff);

        if (Difference>(5- round)){
            a =1;
            compareScores(team_A_score,team_B_score) ;           
        }
        break;
        ++round;

    }
    if (a == 0){
    printf("%d\n", team_A_score);
    printf("%d\n", team_B_score);
    compareScores(team_A_score, team_B_score);
    }
}

int main() {
   
  penalty();
   
    return 0;
}




   


