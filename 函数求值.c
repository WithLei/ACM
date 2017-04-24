#include<stdio.h>
int main(){
	int num;
	while(scanf("%d",&num)!=EOF){
	if(num<1){
		printf("%d\n",num);
	}else if(1<=num&&num<10){
		printf("%d\n",2*num-11);
	}else{
		printf("%d\n",3*num-11);
	}}
} 