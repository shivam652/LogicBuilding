///*write a program to check allpalindrom words in given sentence*/
//
//#include<stdio.h>
//#include<string.h>
//void check(char arr[]);
//int main(){
//	char sent[50], word[50];
//	int len,i,j=0;
//	puts("enter a sentence: ");
//	gets(sent);
//	len=strlen(sent);
//	for(i=0;i<=len;i++){
//		word[j++]=sent[i];
//		if(sent[i]==' '||sent[i]=='\0'){
//			word[--j]='\0';
//			check(word);
//			j=0;
//		}
//
//	}
//
//	getch();
//	return 0;
//}
//
//void check(char arr[]){
//	char rev[50];
//	strcpy(rev,arr);
//	//printf("%s",rev);
//	strrev(rev);
//	if(strcmpi(rev,arr)==0)
//		printf("palindrome word is: %s\n",rev);
//}
