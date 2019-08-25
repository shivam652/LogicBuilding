//#include<stdio.h>
//int fact(int);
//int arm(int);
//int main(){
//	int no;
//	//printf("\n enter number");
//	//scanf("%d", &no);
//	printf("Armstrong numbers between 100-1000 are: ");
//	for(no=100;no<1000;no++){
//		if(arm(no))
//			printf("%d\t",no);
//		//else
//			//printf("not a armstrong number");
//	}
//	getch();
//	return 0;
//}
//int arm(int no){
//	int s=no, r, sum= 0;
//	while(s>0){
//	r=s%10;
//	sum=sum + cube(r);
//	s=s/10;
//	}
//	if(sum==no)
//		return 1;
//	return 0;
//}
//
//int cube(int num){
//	return num*num*num;
//}