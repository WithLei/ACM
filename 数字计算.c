#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a*a+b*b>100){
		printf("%d\n",(a*a+b*b)/100);
	}else{
		printf("%d\n",a*a+b*b);
	}
}