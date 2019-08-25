#include <stdio.h>
int player1(int *);
int player2(int *);
int check(int *);
int main()
{   int flag=0,turn=0;
    int tic[3][3]={0};
    while(flag==0){
        if(turn%2==0)
            flag=player1(tic);
        else{
            flag=player2(tic);
        }
        turn++;
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d\t",tic[i][j]);
        printf("\n");
        }
    if(flag==1)
        printf("player 1 is winner\n");
    else if(flag==2)
        printf("player 2 is winner\n");
    else if(flag==3)
        printf("game draw\n");
    
    return 0;
}
