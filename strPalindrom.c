#include<stdio.h>
int main(){
	int i,n, len=0, flag=0;
	char a[10], temp;
	
	printf("Enter a String: ");
	scanf("%s",a);

	for(i=0;a[i]!='\0';i++);
	len=i-1;
	n=len/2;
	for(i=0;i<=n;i++)
	{
		if(a[i]!=a[len--])
		{	flag=1;
			break;
		}
	}
	if(flag==0)
		printf("palindrome");
	else
		printf("not palindrome");
	

	getch();
	return 0;
}
