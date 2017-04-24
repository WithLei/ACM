#include<stdio.h>
#include<string.h>
int main(){
	int num,mul,i=0,length,a[200];
	scanf("%d",&num);
		while(num>0){
		mul=num%5;
		num/=5;
		a[i]=mul;i++;
	}
	//for(length=0;a[length]!='\0';length++);
	//printf("%d\n",length);
	for(i=i-1;i>0;i--){
		printf("%d",a[i]);
	}printf("\n");
}