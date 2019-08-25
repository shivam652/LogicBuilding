//#include<stdio.h>
//int digit_occur(int,int);
//int main(){
//	int no,digit,i,count;
//	printf("\n enter number: ");
//	scanf("%d", &no);
//	printf("\n enter digit to find occurance: ");
//	scanf("%d", &digit);
//	count = digit_occur(no,digit);
//	printf("Occurence %d is %d", digit,count);
//	getch();
//	return 0;
//}
//
//int digit_occur(int no, int digit){
//	int num=no, r,c=0, d=digit;
//	while(num!=0){
//		r= num%10;
//		if(r==d)
//			c++;
//		num=num/10;
//	}
//	return c;
//}