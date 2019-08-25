int player2(int tic[3][3]){
    int i,j,flag=0;
   
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",tic[i][j]);
        printf("\n");     
    }
    
    printf("player 2 enter position: ");
    scanf("%d %d",&i,&j);
    if(tic[i][j]==0){
        tic[i][j]=2;
       flag=check(tic);
       return flag;
    }
    else{
        printf("illegal move");
        player1(tic);
    }       
    return flag;
}
