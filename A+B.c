#include<stdio.h>
int main(){
	int num1,num2;
	while(scanf("%d%d",&num1,&num2)!=EOF){
		if((num1+num2)%86==0){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
}