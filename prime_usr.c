//#include<stdio.h>
//#include<math.h>
//int prime(int);
//int main(){
//	int flag=0,i,n,count;
//	printf("Enter number: ");
//	scanf("%d",&n);
//	count=n;
//	n++;
//	if(n==1||n==0)
//		printf("1 is neither prime nor composite\n");
//	while(count!=0){
//		if(prime(abs(n))){
//			printf("%d is Prime \n",n);
//			count--;
//		}
//		n++;
//	}
//	getch();
//	return 0;
//}
//
//int prime(int n){
//	int i, flag=0;
//	for(i=2;i<=n/2;i++){
//		if(n%i==0){
//			flag=1;
//			break;
//		}
//	}
//	if(flag!=1)
//		return 1;
//	return 0;
//}
//	