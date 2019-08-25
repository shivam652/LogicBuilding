//#include<stdio.h>
//int fact(int);
//int special(int);
//int main(){
//	int no;
//	//printf("\n enter number");
//	//scanf("%d", &no);
//	printf("Special number are \n");
//	for(no=1;no<=200000;no++){
//		if(special(no))
//			printf("%d \n",no);
//		//else
//			//printf("not a special number");
//	}
//	getch();
//	return 0;
//}
//int special(int no){
//	int s=no, r, sum= 0;
//	while(s>0){
//	r=s%10;
//	sum=sum + fact(r);
//	s=s/10;
//	}
//	if(sum==no)
//		return 1;
//	return 0;
//}
//
//int fact(int num){
//	int i, f=1;
//	for (i=1;i<=num;i++)
//		f=f*i;
//	return f;
//}