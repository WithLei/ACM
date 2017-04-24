#include <stdio.h>
int main(){
	int year;
	scanf("%d",&year);
	if(year>0){
	if(year%400==0){
		printf("366\n");
	}else{
		if(year%100==0){
			printf("365\n");
		}else{
			if(year%4==0){
				printf("366\n");
			}else{
				printf("365\n");
			}
		}
	}
}}