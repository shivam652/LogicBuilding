//#include<stdio.h>
//int main(){
//	int i,j,d1=0,d2=0,sum1,sum2,flag=0;
//	int a[4][4],row[4],col[4];
//	for(i=0;i<4;i++){
//		for(j=0;j<4;j++){
//			printf("Enter Number: ");
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(i=0;i<4;i++){
//		for(j=0;j<4;j++){
//			printf("%d \t",a[i][j]);
//		}
//		printf("\n");
//	}
//
//	for(i=0;i<4;i++)
//		d1 = d1+a[i][i];
//		d2 = d2+a[i][3-i];
//
//	if(d1==d2){
//		for(i=0;i<4;i++){
//			sum1=0;
//			sum2=0;
//			for(j=0;j<4;j++){
//				sum1 = sum1 + a[i][j];
//				//row[i] = sum1;
//				sum2 = sum2 + a[j][i];
//				//col[i] = sum2;
//			}
//			if(sum1!=sum2 || sum1!=d1){
//				flag=1;
//				break;
//			}
//		}
//	}
//	if(flag==0)
//		printf("Its a magic square number");
//	else
//		printf("Its not magic square number");
//	getch();
//	return 0;
//}