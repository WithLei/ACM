#include<stdio.h>
int main(){
	int time,num[102],flag;
	scanf("%d",&time);
	for(int i=0;i<time;i++){
		scanf("%d",&num[i]);}
		scanf("%d",&flag);
	for(int i=flag-1;i<time-1;i++){
		num[i]=num[i+1];
	}
	printf("%d",num[0]);
	for(int i=1;i<time-1;i++){
		printf(" %d",num[i]);
	}
	printf("\n");
}