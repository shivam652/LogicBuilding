#include<stdio.h>
int main(){
	int i,j;
	int a[3][3];
		
	for(i=0,j=0;j<3;j++){
			printf("Enter Number: ");
			scanf("%d",&a[i][j]);
	}
	j--;
	i++;
	for(;i<3;i++){
		printf("Enter Number: ");
			scanf("%d",&a[i][j]);
	}
	i--;
	j--;
	for(;j>=0;j--){
		printf("Enter Number: ");
			scanf("%d",&a[i][j]);
	}
	j++;
	i--;
	printf("Enter Number: ");
			scanf("%d",&a[i][j++]);

	printf("Enter Number: ");
			scanf("%d",&a[i][j]);
	



	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}

	getch();
	return 0;
}