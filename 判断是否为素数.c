#include <stdio.h>
#include <math.h>
int main(){
	int i,t,x,range;
	scanf("%d",&x);
			for(i=0;i<sqrt(x);i++);//x最大整数开方i 
			for(t=2;t<=i;t++){//判断当前x是否为素数
				if(x%t==0&&x!=t){printf("no\n");break;}
				else{if(t==i){
					printf("yes\n");
				}}} 
	}
//判断是否为素数 