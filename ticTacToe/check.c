int check(int tic[3][3]){
    int count;
    int i,j,flag=0;
    for(i=0; i<3; i++)  /* check rows */
    if(tic[i][0]==tic[i][1] && tic[i][0]==tic[i][2]) 
        return tic[i][0];

  for(i=0; i<3; i++)  /* check columns */
    if(tic[0][i]==tic[1][i] && tic[0][i]==tic[2][i]) 
        return tic[0][i];

  /* test diagonals */
  if(tic[0][0]==tic[1][1] && tic[1][1]==tic[2][2])
       return tic[0][0];

  if(tic[0][2]==tic[1][1] && tic[1][1]==tic[2][0])
       return tic[0][2];
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          if(tic[i][j]==0)
              return 0;
      }
  }
    if(i*j==9)
        return 3;
  return 0;
}