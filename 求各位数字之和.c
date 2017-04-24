#include<stdio.h>
#include<string.h>
int main(){
	char n[101];
	int sum,i,length;
	while(scanf("%s",n)!=EOF){
		sum=0;
		length=strlen(n);
		for(i=0;i<length;i++){
			sum+=n[i]-48;
		}printf("%d\n",sum);
	}
	
} 