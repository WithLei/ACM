#include<stdio.h>
int main(){
	int num,x,bs,h;
	scanf("%d",&num);
	for(h=1;h<=num;h++){  
		for(bs=0;bs<num-h;bs++){
			printf(" ");}
		for(x=0;x<num;x++){
			printf("*");
		} printf("\n");
}
} 