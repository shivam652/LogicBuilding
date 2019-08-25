//#include<stdio.h>
//int fib(int n){
//	static int t1=0,t2=1,next;
//	next=t1+t2;
//	printf("\t %d",next);
//	t1=t2;
//	t2=next;
//	n--;
//	if(n>2)
//		fib(n);
//}
//int main(){
//	int num;
//	printf("enter a number");
//	scanf("%d",&num);
//	if(num==0)
//		printf("INvalid choice");
//	else if(num==1)
//		printf("\n 0");
//	else if(num==2)
//		printf("\n0 \t1");
//	else{
//		printf("\n0 \t1");
//		fib(num);
//	}
//
//getch();
//return 0;
//}