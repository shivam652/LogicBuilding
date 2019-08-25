//#include<stdio.h>
////#include<string.h>
//int create(int, int, int);
//int count(int);
//int main(){
//	int arr[3],b[6];
//	int i,max;
//	for(i=0;i<3;i++){
//		printf("\nenter number: ");
//		scanf("%d",&arr[i]);
//	}
//
//	b[0]=create(arr[0],arr[1],arr[2]);
//	b[1]=create(arr[0],arr[2],arr[1]);
//	b[2]=create(arr[1],arr[0],arr[2]);
//	b[3]=create(arr[1],arr[2],arr[0]);
//	b[4]=create(arr[2],arr[1],arr[0]);
//	b[5]=create(arr[2],arr[0],arr[1]);
//	//for(i=1;i<6;i++)
//		//printf("\t %d",);
//	max=b[0];
//	for(i=1;i<6;i++){
//		if(b[i]>max)
//			max=b[i];
//	}
//	printf("\t %d",max);
//	getch();
//	return 0;
//}
//
//int create(int a, int b ,int c){
//	int b_count, c_count,i;
//	
//	b_count=count(b);
//	c_count=count(c);
//
//	for(i=0;i<b_count;i++){
//		a=a*10;
//	}
//	a=a+b;
//
//	for(i=0;i<c_count;i++){
//		a=a*10;
//	}
//	a=a+c;
//	 return a;
//}
//
//int count(int no){
//	int count=1;
//	while(no/10!=0){
//			no=no/10;
//			count++;
//	}
//	return count;
//}