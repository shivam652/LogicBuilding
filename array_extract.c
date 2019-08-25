//#include<stdio.h>
//void extract(int a[],int size, int s,int n){
//	int i;
//	for(i=s;i<s+n;i++){
//		printf("\t %d",a[i]);
//	}
//}
//int main(){
//	int arr[5],i,start,num,size=5;
//	printf("\nenter 5 numbers: ");
//	for(i=0;i<size;i++){
//		scanf("%d",&arr[i]);
//	}
//	printf("\nenter start index: ");
//	scanf("%d",&start);
//	if(start<size && start>=0){
//			printf("\nenter number of elements to extract: ");
//			scanf("%d", &num);
//			if(size-start>=num){
//					extract(arr,size,start,num);
//			}
//			else
//				printf("limit exceeded");
//		}
//	else{
//		printf("array index out of bound");
//	}
//	getch();
//	return 0;
//}